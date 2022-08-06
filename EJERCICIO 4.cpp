#include <stdio.h>
int main()
{
 char CADENA[20];
 int x=0;
 int y=0;
 int CARACTERES=0;
    printf ("EN MINUSCULA INGRESAR LA PALABRA: ");
    scanf("%s",CADENA);
while ( CADENA[x] !=  0)
 {
    CARACTERES++;
    x++;
 }
 x=0;
 for (x=0;x<CARACTERES;x++)
 {
 if (CADENA[x]==97)
 {
    y++;
 }
 }
 printf ("LA PALABRA CONTIENE %d 'a' MINUSCULA",y) ; 

}
