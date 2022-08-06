#include <stdio.h>

int main()
{
 char CADENA[20];
int Y =0;
int CARACTERES =0;
    printf ("INGRESE LA PALABRA: ");
    scanf("%s", &CADENA);

 while ( CADENA[i] !=  0)
 {
     CARACTERES++;
     Y++;
 }
printf ("\nLA CANTIDAD DE CARACTERES DE LA PALABRA SON %d",CARACTERES);
}