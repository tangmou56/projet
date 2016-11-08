#include <stdio.h>
int somme(int n_premiers_entiers){

	int indice = 0;
	int sommee =0;
	while(indice<=n_premiers_entiers){
		sommee+=indice;
		indice++;}
	printf("la somme est %d\n",sommee);return 0;
}



int somme_double(int n_premiers_entiers){

	int indice = 0;
	int sommee =0;
	while(indice<=n_premiers_entiers){
		sommee+=indice;
		indice++;}
	printf("la somme double est %d\n",sommee*2);return 0;
}

int main(void)
{
	int n_premiers_entiers;
	printf("calcule la somme et double de somme des n premieres entiers,entres n :");
	scanf("%d",&n_premiers_entiers);
	somme_double(n_premiers_entiers);
	somme(n_premiers_entiers);
}
