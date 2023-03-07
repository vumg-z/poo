#include <iostream>

using namespace std;

class Rectangulo {

private:
  int largo;
  int ancho;

public:
  Rectangulo(int l, int a) {
    largo = l;
    ancho = a;
  }

  int getArea() { return largo * ancho; }
  int getLargo() { return largo; }
  int getAncho() { return ancho; }
};

class Ortoedro {
private:
  int altura;
  Rectangulo rect;

public:
  Ortoedro(int lado, int ancho, int altura) : rect(lado, ancho) {
    this->altura = altura;
  }

  int Superficie() {
    return (2 * rect.getAncho() * rect.getLargo() +
            (2 * rect.getLargo() * altura + (2 * altura * rect.getAncho())));
  }

  int Volumen() { return rect.getArea() * altura; }
};

int main() {
  Ortoedro ortoedro(10, 6, 3);

  cout << ortoedro.Volumen() << " " << endl;
  cout << ortoedro.Superficie() << " " << endl;
}