#include <stdio.h>
#define MAX 5

int ingreso_cant(void);
void ingreso_temp(int, int[]);
float calcula_prom(int, int[]);
void imprimir(float);

int main (void){
    int cant;
    cant = ingreso_cant();
    int numeros[cant];
    float prom; 
    ingreso_temp(cant, numeros);
    prom = calcula_prom(cant, numeros);
    imprimir(prom);
}

int ingreso_cant(void){
    int cant;
    printf("coloque la cantidad de temperaturas que quiere ingresar: ");
    scanf("%d", &cant);
    return cant;
}

void ingreso_temp(int cant, int numeros[]){
    for(int i = 0; i < cant; i++){
        printf("ingrese la temperatura %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
}

float calcula_prom(int cant, int numeros[]){
    float prom = 0;
    for (int i=0; i<cant; i++){
        prom+=numeros[i];
    }
    prom/=cant;
    return prom;
}

void imprimir(float prom){
    printf("el promedio fue de: %f\n", prom);
}

