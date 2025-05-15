#include <iostream>

extern "C" {
    int calcularMCD(int a, int b);
    int sumarArreglo(int* arr, int size);
}

int main() {
    int opcion = 0;

    std::cout << "======= PROGRAMA HÍBRIDO ASM + C++ =======" << std::endl;

    while (opcion != 3) {
        std::cout << "\n1. Calcular MCD\n2. Sumar arreglo\n3. Salir\nOpción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int a, b;
                std::cout << "Ingrese el primer número: ";
                std::cin >> a;
                std::cout << "Ingrese el segundo número: ";
                std::cin >> b;
                int resultado = calcularMCD(a, b);
                std::cout << "El MCD es: " << resultado << std::endl;
                break;
            }
            case 2: {
                int n;
                std::cout << "Ingrese tamaño del arreglo: ";
                std::cin >> n;
                int* arr = new int[n];
                for (int i = 0; i < n; i++) {
                    std::cout << "Elemento [" << i << "]: ";
                    std::cin >> arr[i];
                }
                int suma = sumarArreglo(arr, n);
                std::cout << "La suma es: " << suma << std::endl;
                delete[] arr;
                break;
            }
            case 3:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida." << std::endl;
        }
    }

    return 0;
}