#include<stdio.h>


long fact (short nb)
{
    short indice;
    long factorielle_nb = 1;
    
    for(indice = nb ; indice > 0; indice--)
        factorielle_nb = factorielle_nb * indice;
    
    return factorielle_nb;
}

int calculer_une_case (int c, int l)
{
    return (fact(l) / (fact(c) * fact(l - c)));
}

int main(){
	int valeur;
	valeur=0;
	if(fact(valeur)!=1){
		printf("Le test 0 a raté");
	
	}
	valeur=1;
	if(fact(valeur)!=1){
		printf("Le test 1 a raté");
	
	}
	
	valeur=2;
	if(fact(valeur)!=2){
		printf("Le test 2 a raté");
	
	}

	valeur=5;
	if(fact(valeur)!=120){
		printf("Le test 5 a raté");
	
	}
	
	if(calculer_une_case(4,1)!=4){
		printf("Le test 4,1 a raté,le résultat est %i",calculer_une_case(4,1));
	}
	
}