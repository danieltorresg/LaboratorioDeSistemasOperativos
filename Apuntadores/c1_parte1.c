#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/

/* Funciones de test */
/* void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void); */

/* Funciones del programa */
int esLetra(char ch);
int toupper(int ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);


/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
    char str[50];
    printf("Ingrese una cadena: ");
    scanf("%s", str);
    stringToMayuscula(str);
    printf("La cadena en mayúscula es %s\n:", str);
    /* testVolverMayuscula();
    testEsLetra();
    testStringToMayuscula(); */
    return 0;
}


/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
    return isalpha(ch);
}

/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
    *ch = toupper(*ch);
}


/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la función tendra los caracteres en mayuscula.
 *   @return void
 */

void stringToMayuscula(char s[]) {
    int i = 0;
    while(s[i]!='!'){
        if (esLetra(s[i]))
        {
            volverMayuscula(&s[i]);
        }
        
        i += 1;
        if (i == strlen(s))
        {
            i = 0;
        } 
    }
}