// Leia dois inteiros e exiba o resto da divisao entre eles.

#include <stdio.h>
#include <ctype.h>

int main(){
    int num1, num2, resto;
    printf("Digite um número: ");
    scanf("%d", num1);
    printf("Digite mais um número: ");
    scanf("%d", &num2);
    resto = num1 % num2;
    printf("Resto da divisão entre os números são: %d", resto);

    return 0;
}
