#include <stdio.h>

 struct INFORMACION
  {
      char NOMBRE[15];
      int EDAD;
  };
  
int main ()
{
 
  int Y = 0;
  int MIN = 0;
 struct INFORMACION INFO[5];

  for (Y = 0; Y < 5; Y++)
    {
      printf ("INGRESAR EL NOMBRE DE LA PERSONA: ");
      scanf ("%s", INFO[Y].NOMBRE);
      printf ("INGRESAR LA EDAD DE LA PERSONA: ");
      scanf ("%d", &INFO[Y].EDAD);
    }
    MIN = INFO[0].EDAD;
    
  for (Y = 0; Y<5; Y++)
    {

      if (INFO[Y].EDAD < MIN) 
	{
	 MIN = INFO[Y].EDAD;
	}
	
    }
  for (Y=0;Y<5;Y++)
    {
      if (INFO[Y].EDAD == MIN)
	{
	  printf ("LA PERSONA DE MENOR EDAD ES %s",INFO[Y].NOMBRE);
	}
    }
}