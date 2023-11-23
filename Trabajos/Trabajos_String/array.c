#include <stdio.h>
#define CANT_MAX 10


int main (void){
    int temp[CANT_MAX];
    for (int i=0; i<CANT_MAX; i++){
        printf("ingrese la temperatura %d: ", i+1);
        scanf("%d", &temp[i]);
    }
    for (int j=0; j<CANT_MAX; j++){
        printf("La temperatura %d es %d grados\n", j+1, temp[j]);
    }
}