#include <stdio.h>
int main() {
    int n1, n2, soma, sub, mult, div, rest;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    rest = n1 % n2;
    printf("Soma: %d\n Subtração: %d\n Multiplicação: %d\n Divisão: %d\n Resto: %d\n", soma, sub, mult, div, rest);
    return 0;
}