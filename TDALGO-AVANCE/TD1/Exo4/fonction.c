#include"defi.h"



int compter_occurrences(char car,int taille,char *mot){
	int n=0;	
	for(int i=0;i<=taille;i++){
		if(mot[i]==car){
			n++;
			}
	}
	return n;
}

int comter_voyelles(int taille,char *mot){
	int n=0;
	return n=compter_occurrences('a',N,mot)+compter_occurrences('e',N,mot)+compter_occurrences('i',N,mot)+compter_occurrences('o',N,mot)+compter_occurrences('u',N,mot)+compter_occurrences('y',N,mot);
}

