#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero; ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("O Numero e PAR. \n");
    }
    else{
        printf("O numero e IMPAR. \n");
    }
    return 0;
}