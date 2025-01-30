#include <iostream>
#include <vector> // Para usar matrices
#include <random> // Para generar números aleatorios

using namespace std;

class Multiplicacion {
  public:
    // Constructor
    Multiplicacion(vector<vector<int>> matriz1, vector<vector<int>> matriz2) : matriz1_(matriz1), matriz2_(matriz2) {}

    // Función para multiplicar las matrices
    virtual vector<vector<int>> multiplicar() = 0;

  protected:
    vector<vector<int>> matriz1_;
    vector<vector<int>> matriz2_;
};

