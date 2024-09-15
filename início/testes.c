#include <stdio.h> // Biblioteca padrão

int main() {
    printf("Olá, Mundo!\n");
    return 0; // Termina o programa
}

int main() {
    int a, b, c

    printf("Digite a primeira parcela: ");
    scanf("%d", a); // %d porque vai ser um número inteiro, não hexadecimal
    // scanf serve para ler a entrada no terminal (gets.chomp.to_li em Ruby)

    printf("Digite a segunda parcela: ");
    scanf("%d", b);

    soma = a + b; // Linha simples para somar

    printf("A soma é: %d\n", soma);

    return 0;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("O número é maior que 10.\n");
    } else {
        printf("O número é 10 ou menor..\n");
    }

    return 0;
}

int main() {
    // Seja i = 0; enquanto i < 5; i é incrementado em 1
    // O loop para quando i >= 5
    for (int i = 0; i < 5; i++) {
        printf("Contador: %d\n", i);
    }

    return 0;
}
