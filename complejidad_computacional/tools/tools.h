#include <iostream>
#include <random> // Para generar los números aleatorios
#include <vector> // Para usar matrices

using namespace std;

struct Tools {
  string filename;
};

vector<vector<int>> generarMatriz(int columnas, int filas); // Generar matrices con números aleatorios
void mostrarMatriz(const vector<vector<int>>& matriz); // Mostrar matrices
Tools leerDatos(int argc, char* argv[]); // Leer los datos de entrada