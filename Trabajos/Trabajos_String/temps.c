#include <stdio.h>
#define MAX 20
#define MIN 10

int ingresar_cant(void);
void ingresar_temps(int, int[]);
float calculo_prom(int, int[]);
int calculo_max(int, int[]);
int calculo_min(int, int[]);
int calculo_amp(int, int[]);
void imprimir (float, int, int, int);

int main (void){
    int cant;
    cant = ingresar_cant();
    int temp[cant], amp, min, max;
    float prom;
    ingresar_temps(cant, temp);
    prom = calculo_prom(cant, temp);
    max = calculo_max(cant, temp);
    min = calculo_min(cant, temp);
    amp = calculo_amp(cant, temp);
    imprimir (prom, max, min, amp);
}

int ingresar_cant(void){
    int cant;
    printf("indique la cantidad de temperaturas que desea ingresar: ");
    scanf("%d", &cant);
    return cant;
}

void ingresar_temps(int cant, int temp[]){
    for (int i=0; i<cant; i++){
        printf("ingrese la temperatura %d: ", i+1);
        scanf("%d", &temp[i]);
    }
}
float calculo_prom(int cant, int temp[]){
    float prom = 0;
    for (int i=0; i<cant; i++){
        prom+=temp[i];
    }
    prom/=cant;
    return prom;
}

int calculo_max(int cant, int temp[]){
    int max = temp[0];
    for (int i=0; i<cant; i++){
        if(temp[i]>max){
            max = temp[i];
        }
    }
    return max;
}

int calculo_min(int cant, int temp[]){
    int min = temp[0];
    for (int i=0; i<cant; i++){
        if(temp[i]<min){
            min = temp[i];
        }
    }
    return min;
}

int calculo_amp(int cant, int temp[]){ 
    int amp = 0;
    for (int i=0; i<cant; i++){
        if(temp[i]>=MIN && temp[i]<=MAX){
            amp++;
        }
    }
    return amp;
}

void imprimir(float prom, int max, int min, int amp){
    printf("El promedio es de %f\n", prom);
    printf("la temperatura minima es de %d, y la maxima de %d\n", min, max);
    if (amp == 1) {
        printf("La cantidad de veces que la temperatura estuvo entre %d y %d grados fue de una vez\n", MIN, MAX); 
    } else {
        printf("La cantidad de veces que la temperatura estuvo entre %d y %d grados fue de %d veces\n", MIN, MAX, amp);
    }
}