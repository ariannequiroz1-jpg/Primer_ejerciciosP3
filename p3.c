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

void cargarAlumno(Alumno *a);
void mostrarAlumno(Alumno *a);
void cumplirAnios(Alumno *a);

int main() {
    Alumno p1;

    cargarAlumno(&p1);

    printf("\nDatos antes de cumplir anios:\n");
    mostrarAlumno(&p1);

    cumplirAnios(&p1);

    printf("\nDatos despues de cumplir anios:\n");
    mostrarAlumno(&p1);

    return 0;
}

void cargarAlumno(Alumno *a) {
    printf("Ingrese nombre: ");
    scanf("%49s", a->nombre);

    printf("Ingrese edad: ");
    scanf("%d", &a->edad);

    printf("Ingrese calle principal: ");
    scanf("%49s", a->direccion.callePrincipal);

    printf("Ingrese numero de casa: ");
    scanf("%d", &a->direccion.numeroCasa);

    printf("Ingrese calle secundaria: ");
    scanf("%49s", a->direccion.calleSecundaria);
}

void cumplirAnios(Alumno *a) {
    a->edad++;
}

void mostrarAlumno(Alumno *a) {
    printf("Nombre: %s\n", a->nombre);
    printf("Edad: %d\n", a->edad);
    printf("Calle Principal: %s\n", a->direccion.callePrincipal);
    printf("Numero de Casa: %d\n", a->direccion.numeroCasa);
    printf("Calle Secundaria: %s\n", a->direccion.calleSecundaria);
}