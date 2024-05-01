#include <iostream>

using namespace std;

int calcularFatorial(int num){
    int resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= 1;
    }
    return resultado;
}

int main() {
    int numero = 5;

    // Chamada da função e impressão do resultado
    cout << "O fatorial de " << numero << " é: " << calcularFatorial (numero)<< endl;
    return 0;
}