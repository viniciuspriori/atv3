#include <iostream>
#include "triangulo.cpp"

using namespace std;

int main() {
  tTriangulo t;
  
  t.insere(8, 10, 6);
  t.perimetro(t);
  t.area(t);
  t.hipotenusa(t);
}