#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("menor de idade!");
    }
    else{
        printf("maior de idade!");
    }
    return 0;
}