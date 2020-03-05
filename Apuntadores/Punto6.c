#include <stdio.h>
#include <stdlib.h>

void ordenacionShell(int vector[], int tamano);

int main(){
    printf("El vecctor es: \n");
    int vector[] = {100,1,10,2,3,7,0};
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", vector[i]);
    }    
    printf("\n");
    int tamano = sizeof(vector)/4;
    ordenacionShell(vector, tamano);
    int mediana = (tamano / 2);
    printf("La mediana es: %d \n", vector[mediana]);
}

void ordenacionShell(int vector[], int tamano){
    int salto, j, k;
    salto = tamano / 2;
    while (salto > 0)
    {
        for (int i = salto; i < tamano; i++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (vector[j] <= vector[k])
                {
                    j = -1;
                }else
                {
                    int temp;
                    temp = vector[j];
                    vector[j] = vector[k];
                    vector[k] = temp;
                    j -= salto;
                }
                
                
            }
            
        }
        salto = salto / 2;
        
    }
    
}

