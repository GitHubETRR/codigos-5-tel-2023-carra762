#include <stdio.h>
#define CANT_MAX 30
#define A_MAYUS 32

void ingreso_texto(char[]);
void mayus_o_minus(char[]);

int main (void){
    char txt[CANT_MAX];
    ingreso_texto(txt);
    mayus_o_minus(txt);
}

void ingreso_texto(char txt[]){
    printf("ingrese el texto: ");
    gets(txt);
}

void mayus_o_minus(char txt[]){
    printf("El texto en mayusculas: ");
    for (int i=0; txt[i]!='\0'; i++){
        if(txt[i]>='a' && txt[i]<='z'){
            txt[i]-=A_MAYUS;
        }
    printf("%c", txt[i]);
    }
}