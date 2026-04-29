#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("O número é negativo. \n");
    }
    else{
        printf("O número é positivo. \n");
    }
    return 0;
}