#include <iostream>
#include "triangulo.cpp"

using namespace std;

int main() {
  tTriangulo t;
  
  t.insere(3, 4, 5);
  t.imprime(t);
}