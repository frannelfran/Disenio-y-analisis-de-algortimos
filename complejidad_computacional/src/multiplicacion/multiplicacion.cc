#include "multiplicacion.h"


/**
 * @brief Función que realiza la multiplicación de matrices por filas
 * @return Matriz resultante de la multiplicación
*/

const vector<vector<int>> MultiplicacionFilas::multiplicar() {
  // Creo la matriz resultante
  vector<vector<int>> matriz_resultante(matriz1_.size(), vector<int>(matriz2_[0].size()));
  // Realizo la multiplicación
  for (int i = 0; i < matriz1_.size(); i++) {
    for (int j = 0; j < matriz2_[0].size(); j++) {
      for (int k = 0; k < matriz1_[0].size(); k++) {
        matriz_resultante[i][j] += matriz1_[i][k] * matriz2_[k][j];
      }
    }
  }
  return matriz_resultante;
}

/**
 * @brief Función que realiza la multiplicación de matrices por columnas
 * @return Matriz resultante de la multiplicación
*/

const vector<vector<int>> MultiplicacionColumnas::multiplicar() {
  // Creo la matriz resultante
  vector<vector<int>> matriz_resultante(matriz1_.size(), vector<int>(matriz2_[0].size()));
  // Realizo la multiplicación
  for (int i = 0; i < matriz1_.size(); i++) {
    for (int j = 0; j < matriz2_[0].size(); j++) {
      for (int k = 0; k < matriz1_[0].size(); k++) {
        matriz_resultante[j][i] += matriz1_[i][k] * matriz2_[k][j];
      }
    }
  }
  return matriz_resultante;
}