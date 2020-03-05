#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *obtenerSubcadena(char *array, int index);


int main() {
    printf("Ingrese la cadena: ");
    char hola [20] = "Hola";
    scanf("%s", hola);
    int num;
    printf("Ingrese el número para cortar: ");
    scanf("%d", &num);
    char *subCadena;
    subCadena = obtenerSubcadena(hola, num);
    printf("Cadena :%s \n", subCadena);

}

char *obtenerSubcadena(char *array, int index) {
    array = array + index;
    return array;
}