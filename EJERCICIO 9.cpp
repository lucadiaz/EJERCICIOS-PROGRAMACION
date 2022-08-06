#include <stdio.h>
#include <string.h>
int main ()
{
int y =0;  
char CADENA[10];
  
printf ("PALABRA MAYUSCULA DE MAXIOMO 10 CARACTERES: ");
  
scanf ("%s", CADENA);
  
for (y=0; y < strlen (CADENA); y++)

{
      
CADENA[y] = (CADENA[y] + 3);
      
if ( 90 < CADENA[y]+ 3)
	{
	  
CADENA[y] = CADENA[y] - 26;
	
}
}
printf ("\nLA PALABRA EN CODIGO CESAR ES:%s", CADENA);
}