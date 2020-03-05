#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *obtenerSubcadena(char *array, int index);


int main() {
    printf("Ingrese la cadena:");
    char hola [20] = "Hola";
    scanf("%s", hola);
    int num;
    printf("Ingrese el número para cortar:");
    scanf("%d", &num);
    char *subCadena;
    subCadena = obtenerSubcadena(hola, num);
    printf("\n Cadena :%s \n", subCadena);

}

char *obtenerSubcadena(char *array, int index){
    char * subCadena;
    char *dir = array;
    int tamano = strlen(array) - index;
    subCadena = malloc(sizeof(char)*tamano);
    char aux[200];
    if(index > strlen(array)){        
        return NULL;
    }


    for (int i = 0; i < index; i++)
    {
        *dir++;
    }

    int i = 0;

    while (*dir != '\0') {
        aux[i] = dir[0];
        dir++;
        i++;
    }
    
    printf("El oroginal es: %s", array);
    subCadena = aux;
    return subCadena; 


}