#include <stdio.h>

int contarCaracter(char *, char );

int main() {
    printf("Ingrese la cadena:");
    char hola [20] = "Hola";
    scanf("%s", hola);
    printf("Ingrese el caracter a buscar en la palabra:");
    char letra;
    scanf(" %c", &letra);
    int cnt = contarCaracter(hola, letra);
    printf("El numero de veces que aparece es: %d \n", cnt);
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
