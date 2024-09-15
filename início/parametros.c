#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int numero1 = 10, numero2 = 20;

    int resultado = soma(numero1, numero2);
    printf("A soma é: %d\n", resultado);

    return 0;
}
