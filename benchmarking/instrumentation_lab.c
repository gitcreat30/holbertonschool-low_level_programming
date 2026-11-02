#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
	v = dataset[i];
	v = (v * 3) + (v / 7) - (v % 11);
	if (v < 0)
            v = -v;
	dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{ 
    unsigned long checksum;
    clock_t tb0;
    clock_t tb1;
    clock_t tp2;
    clock_t tr3;

    tb0 = clock();
    build_dataset();
    tb1 = clock();
    process_dataset();
    tp2 = clock();
    checksum = reduce_checksum();
    tr3 = clock();

    if (checksum == 0ul)
	printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", (double)(tr3 - tb0) / CLOCKS_PER_SEC);
    printf("BUILD_DATA seconds: %.6f\n", (double)(tb1 - tb0) / CLOCKS_PER_SEC);
    printf("PROCESS seconds: %.6f\n", (double)(tp2 - tb1) / CLOCKS_PER_SEC);
    printf("REDUCE seconds: %.6f\n", (double)(tr3 - tp2) / CLOCKS_PER_SEC);
 
    return 0;
}
