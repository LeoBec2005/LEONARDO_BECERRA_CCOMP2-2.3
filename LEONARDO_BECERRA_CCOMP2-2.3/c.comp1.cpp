#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 100;
    int contador = 0;
    int numero = 2;  // Comenzar desde el primer número primo (2)

    while (contador < n) {
        if (esPrimo(numero)) {
            std::cout << numero << " ";
            contador++;
        }
        numero++;
    }

    std::cout << std::endl;

    return 0;
}
