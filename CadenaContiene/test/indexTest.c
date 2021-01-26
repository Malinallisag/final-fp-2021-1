#include <stdio.h>
#include <string.h>

int main (void) {
    char cadena1 [100];
    char cadena2 [50];
   printf ("gentrificacion");
   scanf ("% s", cadena1);
   printf (" gente");
   scanf ("% s", cadena2);
    
    if (strstr (cadena1, cadena2)! = NULL) 
    {
        printf (" Existe% s dentro de% s \ n", cadena2, cadena1);
    } más {
        printf (" No existe% s dentro de% s \ n", cadena2, cadena1);
    }
 
}
