#include <iostream>

using namespace std;

bool ehPrimo(int num) {
    if(num <= 1) return false;
    for (int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int numero = 12;

    // Chamada da função e impressão do resultado
    cout << numero << " eh " << (ehPrimo(numero) ? "primo" : "nao primo") << endl;
    return 0;
}