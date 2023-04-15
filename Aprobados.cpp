
/*
Paso 1. abrir archivo
Paso 2. Leer 'n'
Paso 3. Crear arreglo dinámico de tamaño n
Paso 4. Asignar los 'n' structs en el arreglo
Cerrar binario
Paso 5: Recorrer el arreglo
Paso 6: Contar 'count' aprobados
Paso 7: Volver a recorrer
Paso 8: return
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Estudiante {
    char rut[11];
    int c1;
    int c2;
    int c3;
};

Estudiante* aprobados(string nombre_archivo, int& count) {
    ifstream tomi;
    tomi.open(nombre_archivo, ios::binary);
    int n;
    tomi.read((char*)&n, sizeof(int));
    Estudiante* tomasitos = new Estudiante[n];
    tomi.read((char*)tomasitos, sizeof(Estudiante)*n);
    tomi.close();
    int count = 0
    for(int i = 0, i < n , i++) {
        float promedio = (tomasitos[i].c1 + tomasitos[i].c2 + tomasitos[i].c3) / 3.0;
        if (promedio >= 54.5) {
            count++;
        }
    }
    
    Estudiante* paso_kinder = new Estudiantes[count];
    int count_aprobados = 0;
    for(int i = 0, i < n , i++) {
        float promedio = (tomasitos[i].c1 + tomasitos[i].c2 + tomasitos[i].c3) / 3.0;
        if (promedio >= 54.5) {
            paso_kinder[count_aprobados] = tomasitos[i]
            count_aprobados++;
        }
    delete[] tomasitos;
    return paso_kinder;
}
}
int main() {


    return 0;
}

aprobados(string nombre_archivo,)
