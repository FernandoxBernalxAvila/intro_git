#include <stdio.h>
#include <stdlib.h>

#define C_0 0
#define C_1 1
#define C_5 5

#define TAMANO_NOMBRE 50
#define TIPO 20
#define MAX_PERSONAJE 5

typedef struct{
    char* nombre[TAMANO_NOMBRE+C_1];
    char* tipo[TIPO+C_1];
    int fuerza;
    int salud;
}Personaje;

Personaje personaje[MAX_PERSONAJE];

int enteroArreglo[C_5];
int sumaTotal, i, promedio;

void mostrar();

void mostrar(){
    sumaTotal=C_0;

    enteroArreglo[0]=C_0;
    enteroArreglo[1]=C_0;
    enteroArreglo[2]=C_0;
    enteroArreglo[3]=C_0;
    enteroArreglo[4]=C_0;

    for (i=C_0;i<C_5;i++){
        enteroArreglo[i]=C_0;
    }

    for (i=C_0;i<C_5;i++){
        printf("\n");
        printf("Asigne un valor entero #%d: ",i+C_1);
        scanf("%d",&enteroArreglo[i]);
        getchar();
    }

    printf("\nLos datos asignados para el arreglo fueron: \n");
    for (i=C_0;i<C_5;i++){
        printf("Para el arreglo #%d su valor es de: %d \n", i+C_1, enteroArreglo[i]);
    }

    for (i=C_0;i<C_5;i++){
        sumaTotal+=enteroArreglo[i];
    }
    printf("La suma total de todos los valores es de: %d", sumaTotal);

    promedio = sumaTotal / C_5;

    printf("\nEl promedio total de arreglo es de: %d", promedio);

    printf("\n\nPresione entrar para terminar...\n\n");
    getchar();
}


int main (){

    int opcion;

    do{
        opcion=C_0;
        printf("   * * * * ACTIVIDAD 4 * * * * \n\n");
        printf("Opciones disponibles: \n\n");
        printf("#1- Interactuar con un arreglo.\n");
        printf("#2- Registrar personajes.\n");
        printf("#3- Salir.\n\n");
        printf("Seleccione alguna de las opciones: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion)
        {
        case 1:
            mostrar();
            break;
        case 2:
            break;
        case 3:
            //Salir.
            break;
        default:
            printf("Opcion no valida.\n");
            printf("Presione entrar para continuar...\n");
            getchar();
            break;
        }
    }while (opcion != 3);
    printf("\n\nPresione entrar para terminar...");
    getchar();

    return 0;
}
