#include "tools.h"

/**
 * @brief Función que genera una matriz de números aleatorios
 * @param filas Número de filas de la matriz
 * @param columnas Número de columnas de la matriz
 * @return Matriz de números aleatorios
*/

vector<vector<int>> generarMatriz(int filas, int columnas) {
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