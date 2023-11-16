#include <iostream>
#include <vector>
#include <map>
#include <set>

namespace VectorOperations {
    void printVector(const std::vector<int>& vec) {
        std::cout << "Vector: ";
        for (const auto& num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

namespace MapOperations {
    void printAge(const std::map<std::string, int>& ages, const std::string& name) {
        auto it = ages.find(name);
        if (it != ages.end()) {
            std::cout << "Edad de " << name << ": " << it->second << std::endl;
        } else {
            std::cout << name << " no encontrado en el mapa." << std::endl;
        }
    }
}

namespace SetOperations {
    void printSet(const std::set<int>& numSet) {
        std::cout << "Conjunto: ";
        for (const auto& num : numSet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Vector
    std::vector<int> numeros;
    int num;

    std::cout << "Ingrese números para el vector (ingrese un valor no entero para terminar): ";
    while (std::cin >> num) {
        numeros.push_back(num);
    }

    VectorOperations::printVector(numeros);

    // Map
    std::map<std::string, int> edades;
    std::string nombre;
    int edad;

    std::cout << "Ingrese nombres y edades para el mapa (ingrese 'fin' como nombre para terminar): ";
    while (std::cin >> nombre && nombre != "fin") {
        std::cout << "Ingrese la edad para " << nombre << ": ";
        std::cin >> edad;
        edades[nombre] = edad;
    }

    std::cout << "Ingrese un nombre para buscar su edad: ";
    std::cin >> nombre;
    MapOperations::printAge(edades, nombre);

    // Set
    std::set<int> numerosSet;

    std::cout << "Ingrese números para el conjunto (ingrese un valor no entero para terminar): ";
    while (std::cin >> num) {
        numerosSet.insert(num);
    }

    SetOperations::printSet(numerosSet);

    return 0;
}

