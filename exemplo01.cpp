#include <iostream>

using namespace std;

// Declaração da função
int somar(int a, int b){
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3;
    
    // Chamada da função e impressão do resultado
    cout << "A soma de " << num1 << " e " << num2 << " eh: " << somar(num1, num2) << endl;
    return 0;
}