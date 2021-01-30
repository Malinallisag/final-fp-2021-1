#include "..\index.c"
int main(void)
{
char cadena1[] = "almacenes";
char cadena2[] = "alma";
if (buscar(cadena1, cadena2), 1)
{
printf("\t\n Existe %s dentro de %s\n", cadena2, cadena1);
} else {
printf("\t\n No existe %s dentro de %s\n", cadena2, cadena1);
}
}
