
#include <stdio.h>
/**
* \file TP1exo1.c
* \brief Programme qui crée de fichier et l'affiche
* \author TANG YUKE
* \version 1.0
* \date 17 octobre 2016
*/
int creer_fichier(){
	char nom[20];
	FILE *fic;
	int entier=0;

	printf("donner le nom du ficher: ");
	scanf("%s",nom);
	fic=fopen(nom,"w");

	fscanf(fic,"%i",&entier);

	while(entier!=-1){
		scanf("%i",&entier);
		if(entier!=-1){
			fprintf(fic,"%i ",entier);
		}
	}

	fclose(fic);
}

int afficher_fichier(){
	char nom[20];	
	FILE *fic;
	int entier=0;

	printf("donner le nom du ficher: ");
	scanf("%s",nom);
	fic=fopen(nom,"r");
	
	if(fic==NULL){
		printf("Ce fichier n'existe pas");
	 }
	else{
		fscanf(fic,"%i",&entier);
		while(!feof(fic)){
			printf("%i ",entier);
			fscanf(fic,"%i",&entier);	
		}
		fclose(fic);
	}
	
}


int main(){
	creer_fichier();
	afficher_fichier();
}