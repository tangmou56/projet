#include "Outil.h"
#include "Tas.h"

void ModuleAmorceR(){
	//amorce tous les modules (code à exécuter une fois pour toutes AVANT d'utiliser un quelconque module depuis le main)
	OutilAMORCER();//NE PAS DECLASSER:doit toujours être appelé en premier
	//amorcer TOUS les modules autres que Outil mentionnés dans les include de main.c
		TasAMORCER();
}//ModuleAmorceR

int main (int argc, const char * argv[]) {
	
	Appel0("");//NE PAS TOUCHER; ce code doit toujours être placé au début du main
		ModuleAmorceR();//NE PAS TOUCHER; ce code doit toujours suivre immédiatement Appel0("")
		OutilTESTER(5);
		assert(1<0);
	Appel1("");//NE PAS TOUCHER; ce code doit toujours être placé à la fin du main, juste avant le return()
    return 0;
}//main
