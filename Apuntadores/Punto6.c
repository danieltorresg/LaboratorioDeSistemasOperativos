#include <stdio.h>
#include <stdlib.h>

void ordenacionShell(int vector[], int tamano);

int main(){
    printf("Hola");
    int vector[] = {6,1,5,2,3,4,0};
    int tamano = sizeof(vector);
    ordenacionShell(vector, tamano);
    int mediana = (tamano / 2) +1;
    printf("La mediana es: %d", mediana);

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

