#include <stdio.h>

#define LARGO 5
float promedio(int[], int);
int buscar_mayor(int[], int);
int buscar_menor(int[], int);

int main (void) {
    int vect[LARGO]={7,7,7,56};
    float prom;
    int mayor, menor;
    prom=promedio(vect, LARGO);
    mayor=buscar_mayor(vect, LARGO);
    menor=buscar_menor(vect, LARGO);
    printf("el promedio es: %f\n", prom);
    printf("el mayor es: %d\n", mayor);
    printf("el menor es: %d\n", menor);
    return 0;
}

float promedio(int vect[], int cant){
    float prom=0;
    for (int i=0; i<cant; i++){
        prom+=vect[i];
    }
    prom/=cant;
    return prom;
}

int buscar_mayor(int vect[], int cant){
    int mayor=vect[0], i;
    for(i = 1; i < cant; i++){
        if(vect[i] > vect[i+1]){
            mayor=vect[i];
            vect[i]=vect[i+1];
            vect[i+1]=mayor;
        }
    }
    return mayor;
}

int buscar_menor(int vect[], int cant){
    int menor=vect[0], i;
    for(i = 0; i < cant; i++){
        if(vect[i] < vect[i+1]){
            menor=vect[i];
            vect[i]=vect[i+1];
            vect[i+1]=menor;
        }
    }
    return menor;
}
