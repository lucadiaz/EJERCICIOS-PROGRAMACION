#include <stdio.h>
int main()
{
 char CADENA[20];
 int Y=0;
 int CARACTERES=0;
    printf ("INGRESAR LA PALABRA: ");
    scanf("%s",CADENA);
 while ( CADENA[Y] !=  0)
 {
    CARACTERES++;
    Y++;
 }
  for (i=CARACTERES;i>=0;i--)
   {
    printf ("%c",CARACTERES[i]);
   
   }
 

}
