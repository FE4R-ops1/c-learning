#include <stdio.h>

int main(){

    int num,num2;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite um segundo numero: ");
    scanf("%d", &num2);

    if(num >= num2){
        printf("O maior numero e: %d\n", num);
    }
    else{
        printf("O numero maior e: %d\n", num2);
    }
    return 0;
}