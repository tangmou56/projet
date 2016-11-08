#include<stdio.h>

int add(int a,int b ){
	return a+b;	
	}

int main (){
	//arranger

	int n1=-1;
	int n2=-1;
	//agir

	int resultat=add(n1,n2);
	//auditer

	if (resultat!=-2)	
		printf(" le test -1 -1 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);
	
	n1=5;
	n2=3;	
	resultat=add(n1,n2);
	if (resultat!=8)	
		printf(" le test 5 3 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);
	
	n1=5;
	n2=10000000;	
	resultat=add(n1,n2);
	if (resultat!=10000005)	
		printf(" le test 5 10000000 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);

	n1=5;
	n2=0.5;	
	resultat=add(n1,n2);
	if (resultat!=5.5)	
		printf(" le test 5 0.5 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);

	n1=0;
	n2=0;	
	resultat=add(n1,n2);
	if (resultat!=0)	
		printf(" le test 0 0 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);

	n1=5;
	n2=-3;	
	resultat=add(n1,n2);
	if (resultat!=2)	
		printf(" le test 5 3 a raté\n");

	else
		printf(" la somme de %d et %d est %d \n: ",n1, n2,resultat);

}
