#include <stdio.h>

int contarCaracter(char *, char);
int obtenerIndice(char *, char);

int main() {
    printf("Ingrese la cadena:");
    char hola [20] = "Hola";
    scanf("%s", hola);
    printf("Ingrese el caracter a buscar en la palabra:");
    char letra;
    scanf(" %c", &letra);
    int indice = obtenerIndice(hola, letra);
    int cnt = contarCaracter(hola, letra);
    printf("El numero de veces que aparece es: %d \n", cnt);
    printf("El indice es: %d \n", indice);
}



int contarCaracter(char *array, char ch) {
    int cnt = 0;
    while (*array != '\0') {
        if(ch == *array) {
            cnt = cnt + 1  ;
        }
        array++;
    }
    if (cnt == 0)
    {
        cnt = -1;
    }
    return cnt;
}

int obtenerIndice(char *array, char ch) {
    int indice = 0;
    if (contarCaracter(array, ch)==-1)
    {
        return(-1);
    }
    while (*array != '\0') {
        if(ch == *array) {
            return indice;
        }
        indice = indice + 1;
        array++;
    }
    
}