#include <iostream>

using namespace std;

// Declaração da função
int calcularAreaQuadrado(int lado){
    return lado * lado;
}

int main() {
    int lado(5);
    // Chamada da função
    int area = calcularAreaQuadrado(lado);
    cout << "A área do quadrado é: " << area << endl;

    lado = 77;
    // Chamada da função
    area = calcularAreaQuadrado(lado);
    cout << "A área do quadrado é: " << area << endl;
    return 0;
}