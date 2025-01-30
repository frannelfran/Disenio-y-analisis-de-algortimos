#include "src/multiplicacion/multiplicacion.h"
#include "tools/tools.h"
#include "chrono" // Para medir el tiempo de ejecución de las multiplicaciones

/**
 * @author Franco Alla
 * @date 30/01/2025
 * @brief Programa que realiza la multiplicación de matrices
*/

int main(int argc, char* argv[]) {
  Tools datos = leerDatos(argc, argv);
  // Genero las matrices con los datos de entrada
  vector<vector<int>> matriz1 = generarMatriz(datos.columnas1, datos.filas1);
  vector<vector<int>> matriz2 = generarMatriz(datos.columnas2, datos.filas2);

  // Creo los objetos de las clases
  Multiplicacion* multi_filas = new MultiplicacionFilas(matriz1, matriz2);
  Multiplicacion* multi_columnas = new MultiplicacionColumnas(matriz1, matriz2);

  // Calculo el tiempo de ejecución de la multiplicación por filas
  auto start = chrono::high_resolution_clock::now();
  vector<vector<int>> resultado_filas = multi_filas->multiplicar();
  auto end = chrono::high_resolution_clock::now();
  auto duracion_filas = chrono::duration_cast<chrono::microseconds>(end - start);

  // Calculo el tiempo de ejecución de la multiplicación por columnas
  start = chrono::high_resolution_clock::now();
  vector<vector<int>> resultado_columnas = multi_columnas->multiplicar();
  end = chrono::high_resolution_clock::now();
  auto duracion_columnas = chrono::duration_cast<chrono::microseconds>(end - start);

  // Muestro los resultados
  cout << "--- Matriz 1 ---" << endl;
  mostrarMatriz(matriz1);
  cout << "--- Matriz 2 ---" << endl;
  mostrarMatriz(matriz2);
  cout << "--- Resultado multiplicación por filas ---" << endl;
  mostrarMatriz(resultado_filas);
  cout << "--- Resultado multiplicación por columnas ---" << endl;
  mostrarMatriz(resultado_columnas);
  cout << "Tiempo de ejecución multiplicación por filas: " << duracion_filas.count() << " microsegundos" << endl;
  cout << "Tiempo de ejecución multiplicación por columnas: " << duracion_columnas.count() << " microsegundos" << endl;
  delete multi_filas;
  delete multi_columnas;
  
  return 0;
}