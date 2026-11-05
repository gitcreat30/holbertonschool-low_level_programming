#### Rapport d'analyse ###

### Green Tech Efficiency & Benchmarking Lab
Ce projet a pour but d'introduire l'analyse comparative dans la pratique d'ingénierie en exécutant des programmes prédéfinis en C. 
Nous allons mesurer le temps d'exécution, comparer et raisonner afin d'appréhender les résultats en termes d'efficacité et de durabilité.

### Measure Methodology
J'ai utilisé pour toutes les mesures un PC portable avec Windows 11 et WSL. 
Les fichiers C ont été compilés avec : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long.
L'outil de mesure fait appel à la fonction clock() qui retourne le temps processeur approximatif depuis le démarrage du programme exprimé en temps d'horloge. Afin d'obtenir ce résultat en secondes, les valeurs ont été divisées par la constante CLOCKS_PER_SEC.
La méthode retenue pour l'obtention des données est le lancement du programme trois fois, afin d'établir une moyenne. 
Pour la phase "Instrument a multi_phase program", j'ai fait appel à 4 clock() pour mesurer le temps en début (tb0), et trois (tb1, tp2, tr3) placés après chaque phase des différents processus. Pour chaque lancement : TOTAL = BUILD + PROCESS + REDUCE

### Observing performance differences ###

### Baseline loop
Itérations : 100000000
Loop 1 – Time (s) : 0.121308
Loop 2 – Time (s) : 0.077016
Loop 3 – Time (s) : 0.107791
Average : 0.102038

L'on peut constater que le même programme et le même calcul nous donnent des temps différents pour plusieurs raisons :
- D'autres programmes tournent en même temps sur mon PC (Windows 11, antivirus, connexion au réseau ethernet, etc.) ;
- Le processeur du PC change de vitesse tout seul pour économiser l'énergie ou chauffer moins ; 
- WSL ajoute une petite couche entre Linux et Windows.

C'est pour cela qu'il est nécessaire de faire plusieurs mesures afin de mieux cerner 
les incidences (programmes, connexions, processeur).

### Comparison algorithms metrics - Naive vs single-pass 
#Loop 1
Naive algorithm result: 625025000: 
Naive algorithm time: 0.653150 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000025 seconds
#Loop 2
Naive algorithm result: 625025000
Naive algorithm time: 0.637402 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000022 seconds
#Loop 3
Naive algorithm result: 625025000
Naive algorithm time: 0.681739 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000021 seconds
Naive (O(n2)) : 0.657430
Single-pass (O(n)) : 0.000023

Ratio = average Naive algorithm / average Single-pass algorithm

Observation : 
le résultat du Naive algorithm est ~ 29 000 fois plus lent que le single-pass algorithm.
Le passage unique est si rapide que le moindre arrondi change le résultat. clock() pourrait parfois ne pas pouvoir 
mesurer une valeur. Il est à noter que la fonction clock() mesure uniquement le temps processeur (CPU) utilisé par le programme.

### Instrumentation lab
#Loop 1
TOTAL seconds: 0.000496
BUILD_DATA seconds: 0.000278
PROCESS seconds: 0.000146
REDUCE seconds: 0.000072

#Loop 2
TOTAL seconds: 0.000422
BUILD_DATA seconds: 0.000202
PROCESS seconds: 0.000148
REDUCE seconds: 0.000072

#Loop 3
TOTAL seconds: 0.000519
BUILD_DATA seconds: 0.000198
PROCESS seconds: 0.000238
REDUCE seconds: 0.000083

Constatation : 
BUILD_DATA est la phase la plus longue en moyenne, REDUCE est la plus stable, à la troisième loop le PROCESS a dépassé BUILD_DATA, 
cela signifie que le classement sur ces deux phases peut évoluer au cours du temps.

### Relation Between Runtime and Energy Consumption
Le temps de CPU plus long engendre un processeur en activité plus longtemps, ce qui a pour incidence d'augmenter la consommation 
d'énergie. L'indicateur pris en compte dans ce projet est le temps et non la consommation en watts. 
La version Naive occupe le CPU en moyenne ~0,66 s contre ~0,00002 s. Cela signifie que ce processus analysé sur un laps de temps 
plus important se traduirait par des écarts très conséquents. 

### Limitations of the Experiment
Les mesures sont basées sur le temps et non sur la mesure de la consommation (watts). Trois lancements privilégiés.

### Practical Engineering
Le choix de l'algorithme (O(n) contre O(n2)) a un impact important. On peut supposer quand augmentant le temps 
et les phases de mesure que les écarts engendrés seront plus important, et cela se traduira pas une consommation 
d'énergie plus important.  Donc un code optimisé, et plus efficace se traduit par plus de sobriété en terme d'énergie consommée.
