#include <stdio.h>

int main(){
    int num1, soma;
    
    do{
        printf("Digite um número: ");
        scanf("%d", &num1);
        soma += num1;
        printf("a soma é: %d\n", soma);
        if(num1 == 0){
            printf("você digitou 0!!");
        }
    }
    while(num1 > 0 || num1 < 0);
}