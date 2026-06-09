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
void buscarAlumno(Alumno alumnos[], int n, char nombreBuscado[]);
void estadisticas(Alumno alumnos[], int n);
 
int main() {
    Alumno alumnos[MAX];
    char nombreBuscado[50];
 
    for (int i = 0; i < MAX; i++) {
        printf("\n--- Alumno %d ---\n", i + 1);
        cargarAlumno(&alumnos[i]);
    }
 
    printf("\n===== BUSQUEDA =====\n");
    printf("Ingrese nombre a buscar: ");
    scanf("%49s", nombreBuscado);
    buscarAlumno(alumnos, MAX, nombreBuscado);
 
    printf("\n===== ESTADISTICAS =====\n");
    estadisticas(alumnos, MAX);
 
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
    printf("\n--- ALUMNO ---\n");
    printf("Nombre: %s\n", a->nombre);
    printf("Edad: %d\n", a->edad);
    printf("Calle Principal: %s\n", a->direccion.callePrincipal);
    printf("Numero de Casa: %d\n", a->direccion.numeroCasa);
    printf("Calle Secundaria: %s\n", a->direccion.calleSecundaria);
}
 
void buscarAlumno(Alumno alumnos[], int n, char nombreBuscado[]) {
    int i;
 
    for (i = 0; i < n; i++) {
        if (alumnos[i].nombre[0] == nombreBuscado[0]) {
            mostrarAlumno(&alumnos[i]);
            return;
        }
    }
 
    printf("Alumno no encontrado.\n");
}
 
void estadisticas(Alumno alumnos[], int n) {
    int suma = 0;
    int mayores = 0;
    float promedio;
    int i;
 
    for (i = 0; i < n; i++) {
        suma += alumnos[i].edad;
 
        if (alumnos[i].edad >= 18) {
            mayores++;
        }
    }
 
    promedio = (float)suma / n;
 
    printf("Promedio de edades: %.2f\n", promedio);
    printf("Alumnos mayores de edad: %d\n", mayores);
}