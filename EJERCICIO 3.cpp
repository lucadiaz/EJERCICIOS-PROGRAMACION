#include <stdio.h>
int main()
{
 char CADENA1[20];
 char CADENA2[20];
 int Y=0;
 int X=0;
 int CARACTERES1=0;
 int CARACTERES2=0;
    printf ("INGRESAR LA PRIMER CADENA: ");
    scanf("%s",CADENA1);
    printf ("INGRESAR LA SEGUNDA CADENA: ");
    scanf("%s",CADENA2);
     while (  CADENA1[Y] !=  0)
 {
    CARACTERES1++;
    Y++;
 }
 Y=0;
 while (  CADENA2[Y] !=  0)
 {
    CARACTERES2++;
    Y++;
 }
 if (CARACTERES1==CARACTERES2)
 { 
     for (Y=0;Y<CARACTERES1;Y++)
   {
   if (CADENA1[Y]==CADENA2[Y])
   {
    X++;
   }
  
   
   }
}
if (X==CARACTERES2)
{
    printf("LAS CADENAS SON IGUALES");
}
if (X!=CARACTERES2)
{
    printf("LAS CADENAS NO SON IGUALES");
}
}
