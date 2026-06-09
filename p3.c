#include <stdio.h>
#include <string.h>
 
#define MAX 3
 
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
 
int main() {
    Alumno alumnos[MAX];
 
    for (int i = 0; i < MAX; i++) {
        printf("\n--- Alumno %d ---\n", i + 1);
        cargarAlumno(&alumnos[i]);
    }
 
    printf("\n===== LISTA DE ALUMNOS =====\n");
 
    for (int i = 0; i < MAX; i++) {
        printf("\n--- Alumno %d ---\n", i + 1);
        mostrarAlumno(&alumnos[i]);
    }
 
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
 
void mostrarAlumno(Alumno *a) {
    printf("Nombre: %s\n", a->nombre);
    printf("Edad: %d\n", a->edad);
    printf("Calle Principal: %s\n", a->direccion.callePrincipal);
    printf("Numero de Casa: %d\n", a->direccion.numeroCasa);
    printf("Calle Secundaria: %s\n", a->direccion.calleSecundaria);
}