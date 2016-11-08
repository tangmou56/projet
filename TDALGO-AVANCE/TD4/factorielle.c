#include<stdio.h>


int fac(int a){
	int resultat=1;	
	for(int i=1;i<=a;i++){
				resultat=resultat*i;
		}	
		return resultat;
	}
	
	
void main(){
	int n;
	int resultat;
	
	n=5;
	resultat=fac(n);
	if(resultat!=120){
		printf("Le test %i a raté\n",n);
	}
	
	n=0;
	resultat=fac(n);
	if(resultat!=1){
		printf("Le test %i a raté\n",n);
	}

	n=1;
	resultat=fac(n);
	if(resultat!=1){
		printf("Le test %i a raté\n",n);
	}

	n=2.5;
	resultat=fac(n);
	
		printf("Le test de %i est %i\n",n,resultat);
	
	
	n='A';
	resultat=fac(n);
	
		printf("Le test de A est %i\n",resultat);
	

	n=-5;
	resultat=fac(n);
	
		printf("Le test de %i est %i\n",n,resultat);
	
	n=100;
	resultat=fac(n);
	
		printf("Le test de %i est %i\n",n,resultat);
	
}