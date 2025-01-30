#include "src/multiplicacion/multiplicacion.h"
#include "tools/tools.h"
#include "chrono" // Para medir el tiempo de ejecución de las multiplicaciones

/**
 * @author Franco Alla
 * @date 30/01/2025
 * @brief Programa que realiza la multiplicación de matrices
*/

int main() {
  vector<vector<int>> matriz1 = generarMatriz(3, 3);
  vector<vector<int>> matriz2 = generarMatriz(2, 3);

  Multiplicacion* multiplicacion = new MultiplicacionFilas(matriz1, matriz2);
  cout << "--- Matriz 1 ---" << endl;
  mostrarMatriz(matriz1);
  cout << "--- Matriz 2 ---" << endl;
  mostrarMatriz(matriz2);
  mostrarMatriz(multiplicacion->multiplicar());
  
  
  









}