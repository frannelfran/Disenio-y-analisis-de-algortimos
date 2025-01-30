#include "multiplicacion.h"

/**
 * @overload Sobrecarga del operador <<
*/

ostream& operator<<(ostream& os, Multiplicacion& m) {
  // Muestro la primera matriz
  os << "--- Matriz 1 ---" << endl;
  for (int i = 0; i < m.matriz1_.size(); i++) {
    for (int j = 0; j < m.matriz1_[i].size(); j++) {
      os << m.matriz1_[i][j] << " ";
    }
    os << endl;
  }
  // Muestro la segunda matriz
  os << "--- Matriz 2 ---" << endl;
  for (int i = 0; i < m.matriz2_.size(); i++) {
    for (int j = 0; j < m.matriz2_[i].size(); j++) {
      os << m.matriz2_[i][j] << " ";
    }
    os << endl;
  }
  return os;
}