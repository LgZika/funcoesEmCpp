#include <iostream>

using namespace std;

int calcularQuadrado(int x){
    return x * x;
}

int calcularCubo(int x){
    return calcularQuadrado(x) * x;
}

int main(){
    int numero(11);

    int quadrado = calcularQuadrado(numero);
    cout << "O quadrado de " << numero << " é: " << quadrado << endl;

    int cubo = calcularCubo (numero);
    cout << "O cubo de " << numero << " é: " << cubo << endl;
return 0;
}