#include <iostream>

using namespace std;

double celsiusParaFahrenheit(double celsius){
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperaturaCelsius = 20.01;

    // Chamada da função e impressão do resultado
    cout << temperaturaCelsius << " graus Celsius é equivalente a " << celsiusParaFahrenheit (temperaturaCelsius) << " graus Fahrenheit" << endl;
    return 0;
}