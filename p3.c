#include <stdio.h>
#include <string.h>

typedef struct Direccion {
    char callePrincipal[50];
    int numeroCasa;
    char calleSecundaria[50];
} Direccion;

typedef struct {
    char nombre[50];
    int edad;
    Direccion direccion;
} Alumno;

void mostrarAlumno(Alumno *a);

int main() {
    Alumno p1;

    strcpy(p1.nombre, "Juan");
    p1.edad = 20;

    strcpy(p1.direccion.callePrincipal, "Av. Amazonas");
    p1.direccion.numeroCasa = 123;
    strcpy(p1.direccion.calleSecundaria, "Naciones Unidas");

    mostrarAlumno(&p1);

    return 0;
}

void mostrarAlumno(Alumno *a) {
    printf("Nombre: %s\n", a->nombre);
    printf("Edad: %d\n", a->edad);
    printf("Calle Principal: %s\n", a->direccion.callePrincipal);
    printf("Numero de Casa: %d\n", a->direccion.numeroCasa);
    printf("Calle Secundaria: %s\n", a->direccion.calleSecundaria);
}