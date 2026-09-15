/*
maquina de saque 
solicite o valor do saque, numero inteiro
exemplo
Digite o valor do saque: 130
cedulas R$ :*/



#include <stdio.h>

int main() {
    int valor, resto;
    int notas50, notas20, notas10;

    // Solicita o valor ao usuário
    printf("Informe o valor a ser sacado: ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 10 != 0) {
        printf("Valor invalido. Informe um valor positivo e multiplo de R$ 10,00.\n");
        return 1;
    }

    // Calcula a quantidade de notas de R$ 50 e o que sobra
    notas50 = valor / 50;
    resto = valor % 50;

    // Calcula a quantidade de notas de R$ 20 e o que sobra
    notas20 = resto / 20;
    resto = resto % 20;

    // Calcula a quantidade de notas de R$ 10
    notas10 = resto / 10;

    // Exibe o resultado do saque
    printf("\nSaque:\n");
    printf("Cédulas de R$ 50,00 = %d\n", notas50);
    printf("Cédulas de R$ 20,00 = %d\n", notas20);
    printf("Cédulas de R$ 10,00 = %d\n", notas10);

    return 0;
}


