#include <iostream>
#include "triangulo.h"
#include "Circulo.h"
#include "Rombo.h"
#include "Trapecio.h"

int main() {
    double base, altura, radio, diagonalMayor, diagonalMenor, baseMayor, baseMenor;

    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del triángulo: ";
    std::cin >> altura;

    std::cout << "Area del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    std::cout << "Area del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;

    std::cout << "Ingrese la diagonal mayor del rombo: ";
    std::cin >> diagonalMayor;

    std::cout << "Ingrese la diagonal menor del rombo: ";
    std::cin >> diagonalMenor;

    std::cout << "Area del rombo: " << Geometria::calcularAreaRombo(diagonalMayor, diagonalMenor) << std::endl;

    std::cout << "Ingrese la base mayor del trapecio: ";
    std::cin >> baseMayor;

    std::cout << "Ingrese la base menor del trapecio: ";
    std::cin >> baseMenor;

    std::cout << "Ingrese la altura del trapecio: ";
    std::cin >> altura;

    std::cout << "Area del trapecio: " << Geometria::calcularAreaTrapecio(baseMayor, baseMenor, altura) << std::endl;

    return 0;
}
