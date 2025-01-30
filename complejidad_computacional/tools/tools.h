#include <iostream>
#include <random> // Para generar los números aleatorios
#include <vector> // Para usar matrices

using namespace std;

struct Tools {
  // Filas y columnas de la matriz 1
  int filas1;
  int columnas1;
  // Filas y columnas de la matriz 2
  int filas2;
  int columnas2;
};

vector<vector<int>> generarMatriz(int columnas, int filas); // Generar matrices con números aleatorios
void mostrarMatriz(const vector<vector<int>>& matriz); // Mostrar matrices
Tools leerDatos(int argc, char* argv[]); // Leer los datos de entrada