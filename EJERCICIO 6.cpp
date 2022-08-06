#include <stdio.h>

int main()
{
 char CADENA[25];
 int y=0;
 int CARACTERES=0;
 int x=65;
 int SUMADOR[25]={0};
 int MAX=0;
 int BANDERA=0;
    printf ("EN MAYUSCULA INGRESAR PALABRA: ");
    scanf("%s",CADENA);
   
while ( CADENA[y] !=  0)
 {
    CARACTERES++;
    y++;
 }
 
 for (y=0;y<=CARACTERES;y++)
 {
     for (x=65;x<=90;x++)
     {
         
     if(CADENA[y]==x)
     {
         SUMADOR[x-65]++;
         
     }
     
     }

 }
 for (y=0;y<25;y++)
 {
      if (SUMADOR[y]>BANDERA)
     {
         BANDERA=SUMADOR[y];
         MAX=y+65;
     }

 }

 printf ("LA LETRA %c ES LA QUE MAS VECES APARECE CON UNA CANTIDAD DE %d VECES",MAX,BANDERA);
 
}