#include <stdio.h>
#include <stdlib.h>

int Factorielle (int a)
{
return 1;
}

int main ()
{
int valeur=0;
int result = Factorielle (valeur);
if (result !=1)
printf (" le test0 a raté");


valeur =1;
result = Factorielle (valeur);
if (result !=1)
printf("le test1 a raté \n ");


valeur =2;
result = Factorielle (valeur);
if (result !=2)
printf("le test2 a raté \n ");

valeur =3;
result = Factorielle (valeur);
if (result !=6)
printf("le test3 a raté \n ");

valeur =4;
result = Factorielle (valeur);
if (result !=24)
printf("le test4 a raté \n ");


}