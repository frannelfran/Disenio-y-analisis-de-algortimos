#include "tools.h"

/**
 * @brief Función que lee los datos de entrada
 * @param argc Número de argumentos
 * @param argv Argumentos
 * @return Estructura con los datos de entrada
*/

Tools leerDatos(int argc, char* argv[]) {
  Tools datos;
  if (argc != 5) {
    cout << "Modo de uso: " << argv[0] << " <columnas1> <filas1> <columnas2> <filas2>" << endl;
    exit(1);
  }
  // Leer los datos de la matriz 1
  datos.columnas1 = atoi(argv[1]);
  datos.filas1 = atoi(argv[2]);
  // Leer los datos de la matriz 2
  datos.columnas2 = atoi(argv[3]);
  datos.filas2 = atoi(argv[4]);

  // Compruebo que las matrices sean multiplicables
  if (datos.columnas1 != datos.filas2) {
    cout << "Las columnas de la primera matriz no coinciden con las filas de la segunda matriz: " 
         << datos.columnas1 << " != " << datos.filas2 << endl;
    exit(1);
  }
  return datos;
}

/**
 * @brief Función que genera una matriz de números aleatorios
 * @param filas Número de filas de la matriz
 * @param columnas Número de columnas de la matriz
 * @return Matriz de números aleatorios
*/

vector<vector<int>> generarMatriz(int columnas, int filas) {
  // Creo la matris
  vector<vector<int>> matriz(filas, vector<int>(columnas));
  // Para que los números sean aleatorios
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 100);
  // Lleno la matriz
  for (int i = 0; i < filas; i++){
    for (int j = 0; j < columnas; j++) {
      matriz[i][j] = dis(gen);
    }
  }
  return matriz;
}

/**
 * @brief Función que muestra una matriz
 * @param matriz Matriz a mostrar
*/

void mostrarMatriz(const vector<vector<int>>& matriz) {
  for (int i = 0; i < matriz.size(); i++) {
    for (int j = 0; j < matriz[i].size(); j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}