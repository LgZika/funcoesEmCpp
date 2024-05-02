#include <iostream>

using namespace std;

int soma(int a, int b){
    return a + b;
}

int main(){
    int num1(9), num2(59);

    cout << "O resultado da soma de " << num1 << " com " << num2 << " eh: " << soma(num1, num2) << endl; 
return 0;
}