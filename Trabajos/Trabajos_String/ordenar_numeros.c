#include <stdio.h>

int ingresar_cant(void);
void ingresar_numeros(int, int[]);
void ordenar(int, int[]);
void imprimir(int, int[]);

int main (void){
    int cant;
    cant = ingresar_cant();
    int numeros[cant];
    ingresar_numeros(cant, numeros);
    ordenar(cant, numeros);
    imprimir(cant, numeros);
}

int ingresar_cant(void){
    int cant;
    printf("indique la cantidad de numeros que desea: ");
    scanf("%d", &cant);
    return cant;
}

void ingresar_numeros(int cant, int numeros[]){
    for(int i = 0; i < cant; i++){
        printf("ingrese el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
}

void ordenar(int cant, int numeros[]){
    int extra1, extra2; 
    for(int i = 0; i < cant; i++){
        int mayor = 0;
        for (int j = i; j < cant; j++){
            if (numeros[j] > mayor){
                mayor = numeros[j];
                extra1 = j;
            }
        }
    extra2 = numeros[i];
    numeros[i] = numeros[extra1];
    numeros[extra1] = extra2;
    }
}

void imprimir(int cant, int numeros[]){
    for(int i = 0; i < cant; i++){
        printf("%d ", numeros[i]);
    }
}