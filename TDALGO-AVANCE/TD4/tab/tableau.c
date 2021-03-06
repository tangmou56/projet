//
//  tableau.c
//  
//
//  Created by Claudine Piau-Toffolon on 19/10/2015.
//
//

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <string.h>
void permuter_cases (char *tableau, int i1, int i2, int taille) {
    char inter;
    if( (i1 < 0) || (i2 < 0) || (i1 >= taille) || (i2 >= taille)){ printf("impossible d'effectuer la permutation\n");
        exit(1);
    }
    inter = tableau[i2];
    tableau[i2] = tableau[i1];
    tableau[i1] = inter;
}
int main(void) {
    int case1, case2, indice, taille;
    char phrase[512];
    time_t nb_secondes;
    // lecture de la phrase
    printf("entrez une phrase : "); fgets(phrase, 512, stdin);
    taille = strlen(phrase);
    printf("taille de la phrase : %d\n\n", taille);
    // test aleatoire
    printf("TEST ALEATOIRE ------------------\n");
    srand(time(&nb_secondes)); //initialisation du generateur de nb aleatoires
    for(indice=0; indice < 5; indice++){ // testons 5 fois
    case1 = (float)rand()/RAND_MAX * taille; // nb alea. entre 0 et taille
    case2 = (float)rand()/RAND_MAX * taille; // nb alea. entre 0 et taille permuter_cases(phrase, case1, case2, taille);
    printf("la phrase avec les cases %2d et %2d permutees : %s", case1, case2, phrase); permuter_cases(phrase, case2, case1, taille); // on reprend la phrase d'origine
    }
return 0;
}