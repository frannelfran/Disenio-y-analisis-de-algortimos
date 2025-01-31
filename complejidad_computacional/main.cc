#include "src/multiplicacion/multiplicacion.h"
#include "tools/tools.h"
#include "chrono" // Para medir el tiempo de ejecución de las multiplicaciones
#include <fstream> // Para escribir en ficheros
#include <iomanip> // Para dar formato a la salida

/**
 * @author Franco Alla
 * @date 30/01/2025
 * @brief Programa que realiza la multiplicación de matrices
*/

int main(int argc, char* argv[]) {
  Tools datos = leerDatos(argc, argv);
  int rango; // Dimension máxima de las matrices
  ofstream fichero_salida(datos.filename);

  fichero_salida << "Tamaño matriz resultante;Tiempo por filas;Tiempo por columnas" << endl;

  // Datos para la primera matriz
  cout << "Introducir un un tamaño para las matrices (1-100) (0 para salir): ";
  cin >> rango;
  
  if (rango < 1 || rango > 100) {
    if (rango == 0) {
      return 0;
    }
    cout << "El rango debe estar entre 1 y 100" << endl;
    return 1;
  }

  for (int i = 2; i <= rango; i++) {
    // Genero las matrices
    vector<vector<int>> matriz1 = generarMatriz(i, i);
    vector<vector<int>> matriz2 = generarMatriz(i, i);

    // Multiplicación por filas
    Multiplicacion* multi_filas = new MultiplicacionFilas(matriz1, matriz2);
    auto start = chrono::high_resolution_clock::now();
    vector<vector<int>> matriz_resultante_filas = multi_filas->multiplicar();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo_filas = end - start;

    // Mutliplicacion por columnas
    Multiplicacion* multi_columnas = new MultiplicacionColumnas(matriz1, matriz2);
    start = chrono::high_resolution_clock::now();
    vector<vector<int>> matriz_resultante_columnas = multi_columnas->multiplicar();
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo_columnas = end - start;

    // Muestro los resultados por pantalla
    fichero_salida << i << "x" << i << ";" << fixed << setprecision(10) << tiempo_filas.count() << ";" 
                   << tiempo_columnas.count() << endl;

    delete multi_filas;
    delete multi_columnas;
  }

  return 0;
}