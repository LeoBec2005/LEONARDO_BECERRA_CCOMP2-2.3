#include <iostream>

bool esNumeroPerfecto(int num) {
    int sumaDivisores = 1; // Incluye 1 como divisor propio

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
            if (i != num / i) {
                sumaDivisores += num / i;
            }
        }
    }

    return sumaDivisores == num;
}

int main() {
    int n = 4;
    int contador = 0;
    int numero = 2;  // Comenzar desde el primer número perfecto (6)

    while (contador < n) {
        if (esNumeroPerfecto(numero)) {
            std::cout << numero << " ";
            contador++;
        }
        numero++;
    }

    std::cout << std::endl;

    return 0;
}
