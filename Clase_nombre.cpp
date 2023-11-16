#include <iostream>
#include <cmath>

namespace Geometria {
    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r) : radio(r) {}

        double calcularArea() {
            return M_PI * radio * radio;
        }

        double calcularPerimetro() {
            return 2 * M_PI * radio;
        }
    };
}

int main() {
    double radio;

    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    Geometria::Circulo miCirculo(radio);

    std::cout << "Área del círculo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << miCirculo.calcularPerimetro() << std::endl;

    return 0;
}
