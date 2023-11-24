#include <stdio.h>
#include <string.h>
#define MAX 30

void pedir_texto(char[], char[]);
int comparar_textos(char[], char[]);

int main (void){
    char txt1[MAX], txt2[MAX];
    int i, n;
    pedir_texto(txt1, txt2);
    comparar_textos(txt1, txt2);
    return 0;
}

void pedir_texto(char txt1[], char txt2[]){
    printf("ingrese el primer texto: ");
    gets(txt1);
    printf("ingrese el segundo texto: ");
    gets(txt2);
}

int comparar_textos(char txt1[], char txt2[]){
    int igual;
    igual = strcmp(txt1, txt2);
    if (igual==0){
        printf("ambos textos son iguales\n");
    } else {
        printf("los textos son diferentes\n");
    }
}
