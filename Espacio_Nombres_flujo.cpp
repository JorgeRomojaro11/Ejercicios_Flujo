#include <iostream>
#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    double division(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            throw "Error: División por cero";
        }
    }

    double potencia(double base, int exponente) {
        return std::pow(base, exponente);
    }
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Suma: " << Matematicas::suma(num1, num2) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(num1, num2) << std::endl;
    std::cout << "Multiplicación: " << Matematicas::multiplicacion(num1, num2) << std::endl;

    try {
        std::cout << "División: " << Matematicas::division(num1, num2) << std::endl;
    } catch (const char* error) {
        std::cerr << error << std::endl;
    }

    double base;
    int exponente;

    std::cout << "Ingrese la base para la potencia: ";
    std::cin >> base;

    std::cout << "Ingrese el exponente para la potencia: ";
    std::cin >> exponente;

    std::cout << "Potencia: " << Matematicas::potencia(base, exponente) << std::endl;

    return 0;
}