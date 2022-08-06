#i#include <stdio.h>
#include <string.h>
struct PERSONAS
  {
      char NOMBRE[20];
  };
int main ()
{

int y = 0;
int x = 0;
int z = 0;
int CANTIDAD=1;
char PRIMERO[20];
struct PERSONAS PERSONA[CANTIDAD];
while (y >= 0)
{
printf ("INGRESE EL NOMBRE DE LA PERSONA 0 FIN: ");
scanf ("%s", PERSONA[CANTIDAD].NOMBRE);

if (strcmp (PERSONA[CANTIDAD].NOMBRE, "FIN") == 0)
 {
y = -2;
 }
   else
 {
CANTIDAD++;
 }
y++;
}
for (z=1;z<CANTIDAD;z++)
{printf("%s",PERSONA[z].NOMBRE);}
for (y=1;y<CANTIDAD;y++)
{
    for (x=1;x<CANTIDAD;x++)
    {
        if(strcmp(PERSONA[y].NOMBRE,PERSONA[x].NOMBRE)>0)
        {
            strcpy(PRIMERO,PERSONA[y].NOMBRE);
        }
    }
}
printf("LA PRIMERA PERSONA ES: %s",PRIMERO);
}