#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float notas[], int tamano);
void ordenacionShell(float a[][2], int n);


int main() {
    printf("Ingrese el número de estudiantes");
    int estudiantes;
    scanf("%d", &estudiantes);
    printf("Ingrese el número de asignaturas");
    int asignaturas;
    scanf("%d", &asignaturas);
    float notas[estudiantes+1][asignaturas+1];
    float asignaturaAux[estudiantes];
    float estudianteAux[asignaturas];
    float listaOrdenada[estudiantes][2];
    

    //Se llena la tabla de notas para cada estudiante
    for (int i = 0; i < estudiantes; i++)
    {
        for (int j = 0; j < asignaturas; j++)
        {
            notas[i][j]=rand() % 6;
            printf("%f      ", notas[i][j]);
        }
        printf("\n");        
    }    

    //Calcula la meida de cada estudiante
    for (int i = 0; i < estudiantes; i++)
    {
        for (int j = 0; j < asignaturas; j++)
        {
            estudianteAux [j] = notas[i][j];
        }
        notas[i][asignaturas] = calcularMedia(estudianteAux, asignaturas);        
    }

    //Se calcula la media de cada asignatura
    for (int i = 0; i < asignaturas; i++)
    {
        int res = 0;        
        for (int j = 0; j < estudiantes; j++)
        {
            asignaturaAux[j] = notas[j][i];
        }
        notas[estudiantes][i] = calcularMedia(asignaturaAux, estudiantes);
    }
    
    //imprime la media de cada estudiante
    for (int  i = 0; i < estudiantes; i++)
    {
        printf("La media del estudiante %d es: %f\n", i, notas[i][asignaturas]);
    }    

    //imprime la media de cada asignatura
    for (int i = 0; i < asignaturas; i++)
    {
        printf("La media de la asignatura %d es: %f\n", i, notas[estudiantes][i]);          
    }

    //se calcula la media de la clase
    for (int i = 0; i < estudiantes; i++)
    {
        asignaturaAux[i] = notas [i][asignaturas];        
    }
    float mediaClase = calcularMedia(asignaturaAux, estudiantes);
    printf("La media de la calse es: %f \n", mediaClase); 


    //ordenamiento de los alumnos según su media
    for (int i = 0; i < estudiantes; i++)
    {
        listaOrdenada[i][1] = notas[i][asignaturas];
        listaOrdenada[i][0] = i;
    }

    ordenacionShell(listaOrdenada, estudiantes);


    printf("Lista ordenada \n");
    for (int i = 0; i < estudiantes; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f      ", listaOrdenada[i][j]);
        }
        
        printf("\n");
    }
    



}

float calcularMedia(float numeros[], int tamano){
    float res = 0;
    int i = 0;
    while (i != tamano) {
        res = res + numeros[i];
        i++;
    }
    res = res / tamano;
    return res;
    
}

void ordenacionShell(float a[][2], int n){
    int intervalo, i, j, k;
    intervalo = n/2;
    while (intervalo > 0)
    {
        for (int i = intervalo; i < n; i++)
        {
            j = i - intervalo;
            while (j >= 0)
            {
                k = j + intervalo;
                if (a[j][1] >= a[k][1] )
                {
                    j = -1;
                }else
                {
                    double temp[2];
                    temp[0] = a[j][0];
                    temp[1] = a[j][1];
                    a[j][0] = a[k][0];
                    a[j][1] = a[k][1];
                    a[k][0] = temp[0];
                    a[k][1] = temp[1];
                    j -= intervalo;
                }                
                
            }
            
        }
        intervalo = intervalo / 2;
        
    }
    
}

