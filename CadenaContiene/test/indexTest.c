#include <stdio.h>
#include <string.h>

int main (void) {
    char cadena1 [] = "gentrificacion" ;
    char cadena2 [] = "gente" ;
   printf ("Introduce una cadena");
   scanf ("% s", cadena1);
   printf (" Introduce otra cadena");
   scanf ("% s", cadena2);
    
    if (strstr (cadena1, cadena2)! = NULL) 
    {
        printf ("Existe% s dentro de %s", cadena2, cadena1);
    } más {
        printf (" No existe% s dentro de %s ", cadena2, cadena1);
    }
 
}
