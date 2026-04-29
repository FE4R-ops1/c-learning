#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite o seugndo numero: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("os numeros sao iguais!");
    }
    else if(num1 > num2){
        printf("o numero maior e: %d\n", num1);
    }
    else{
        printf("o numero maior e: %d\n", num2);
    }
    return 0;
}