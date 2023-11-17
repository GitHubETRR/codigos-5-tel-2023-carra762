#include <stdio.h>
#include <string.h>
#define MAX 30

void pedir_texto1(char[]);
void pedir_texto2(char[]);
int comparar_textos(char[], char[]);

int main (void){
    char txt1[MAX], txt2[MAX];
    int val;
    pedir_texto1(txt1);
    printf("texto 1. %s", txt1);
    pedir_texto2(txt2);
    val = comparar_textos(txt1, txt2);
    return 0;
}

void pedir_texto1(char txt1[]){
    printf("ingrese la primera palabra\n");
    scanf("%s", &txt1);
    return txt1;
}

void pedir_texto2(char txt2[]){
    printf("ingrese la segunda palabra\n");
    scanf("%s", &txt2);
    return txt2;
}

int comparar_textos(char txt1[], char txt2[]){
    int val;
    val = strcmp(txt1, txt2);
    printf("%s %s\nval = %d\n", txt1, txt2, val);
    return val;
}
