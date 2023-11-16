#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double velocidadLuz = 299792458;

        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }

    namespace Quimica {
        const double constanteAvogadro = 6.022e23;
    }

    namespace Matematicas {
        const double constantePi = 3.14159265359;
    }
}

int main() {
    double masa;

    std::cout << "Ingrese la masa en kg: ";
    std::cin >> masa;

    std::cout << "Energía correspondiente a una masa de " << masa << " kg: "
              << Ciencia::Fisica::calcularEnergia(masa) << " Joules" << std::endl;

    std::cout << "Constante de Avogadro: " << Ciencia::Quimica::constanteAvogadro << std::endl;
    std::cout << "Valor de pi: " << Ciencia::Matematicas::constantePi << std::endl;

    return 0;
}