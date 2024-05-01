#include <iostream>

using namespace std;

bool ehPar(int num) {
    return num % 2 == 0; 
}

int main() {
    int numero = 6;

    // Chamada da função e impressão do resultado
    cout << numero << " eh " << (ehPar(numero) ? "par" : "impar") << endl;  // if ternario exemplo 1 = (ehPar(numero) ? "par" : "impar")  
                                                                            //             exemplo 2 = (1 + 1 == 2) ? "verdade" : "falso")
    return 0;
}