#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() 
{
    std::cout << "=== Creando instancias individuales de Dog y Cat ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Eliminando Dog y Cat..." << std::endl;
    delete j;
    delete i;

    std::cout << "\n=== Creando un array de animales ===\n";
    const int tamaño = 4;
    Animal* animales[tamaño];

    for (int k = 0; k < tamaño / 2; ++k)
        animales[k] = new Dog();
    for (int k = tamaño / 2; k < tamaño; ++k)
        animales[k] = new Cat();

    std::cout << "\n=== Eliminando el array de animales ===\n";
    for (int k = 0; k < tamaño; ++k)
        delete animales[k];

    std::cout << "\n=== Probando la copia profunda (deep copy) ===\n";
    Dog perro1;
    perro1.makeSound();

    std::cout << "\nCopiando perro1 a perro2 (constructor de copia)..." << std::endl;
    Dog perro2 = perro1; // Constructor de copia

    std::cout << "\nCopiando perro1 a perro3 (operador de asignación)..." << std::endl;
    Dog perro3;
    perro3 = perro1;     // Operador de asignación

    return 0;
}