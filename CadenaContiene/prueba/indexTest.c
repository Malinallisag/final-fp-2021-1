#include "..\index.c"
int main(void)
{
char cadena1[] = "gentrificacion";
char cadena2[] = "gente";
if (buscar(cadena1, cadena2), 0)
{
printf("\t\n Existe %s dentro de %s\n", cadena2, cadena1);
} else {
printf("\t\n No existe %s dentro de %s\n", cadena2, cadena1);
}
