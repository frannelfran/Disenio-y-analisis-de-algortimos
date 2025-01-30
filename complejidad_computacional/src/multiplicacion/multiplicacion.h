#include <iostream>
#include <vector> // Para usar matrices

using namespace std;

/**
 * @class Clase que implementa la multiplicación de matrices
*/

class Multiplicacion {
  public:
    // Constructor
    Multiplicacion(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) : matriz1_(matriz1), matriz2_(matriz2) {}

    // Función para multiplicar las matrices
    const virtual vector<vector<int>> multiplicar() = 0;

  protected:
    vector<vector<int>> matriz1_;
    vector<vector<int>> matriz2_;
};

/**
 * @class Clase que implementa la multiplicación de matrices por columnas
*/

class MultiplicacionFilas : public Multiplicacion {
  public:
    // Constructor
    MultiplicacionFilas(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) : Multiplicacion(matriz1, matriz2) {}

    // Función para multiplicar las matrices por filas
    const vector<vector<int>> multiplicar() override;
};

/**
 * @class Clase que implementa la multiplicación de matrices por columnas
*/

class MultiplicacionColumnas : public Multiplicacion {
  public:
    // Constructor
    MultiplicacionColumnas(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) : Multiplicacion(matriz1, matriz2) {}

    // Función para multiplicar las matrices por columnas
    const vector<vector<int>> multiplicar() override;
};
