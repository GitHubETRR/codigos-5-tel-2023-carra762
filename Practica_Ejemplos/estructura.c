#include <stdio.h>

struct alumno{
    char nombre [30];
    char apellido [30];
    int edad;
};

int main (void){
    struct alumno alumno1;
    printf("ingresar nombre: ");
    scanf("%s", alumno1.nombre);
    printf("ingresar apellido: ");
    scanf("%s", alumno1.apellido);
    printf("ingresar edad: ");
    scanf("%d",&alumno1.edad);
    printf("Nombre: %s %s\nEdad: %d", alumno1.nombre, alumno1.apellido, alumno1.edad);
}