#include <stdio.h>
int main()
{
 char CADENA[20];
 int y=0;
 int CARACTERES=0;
 int MAYUS=0;
 int MINUS=0;
    printf ("INGRESAR LA PALABRA: ");
    scanf("%s",CADENA);
while ( CADENA[y] !=  0)
 {
    CARACTERES++; 
    y++;
 }
for (y=0;y<CARACTERES;y++)
{
if (CADENA[y] == 97 || CADENA[y] == 101 || CADENA[y] == 105 || CADENA[y] == 111 || CADENA[y] == 117 )
{
    MINUS++;
}
if (CADENA[y] == 65|| CADENA[y] == 69 || CADENA[y] == 73|| CADENA[y] == 79 || CADENA[y] == 85)
{
   MAYUS++;
}
}
printf("LA PALABRA %s TIENE %d VOCALES MAYUSCULAS Y %d VOCALES MINUSCULAS",CADENA,MAYUS,MINUS);
}