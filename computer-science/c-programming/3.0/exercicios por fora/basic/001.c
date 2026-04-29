#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num & 2)
    {
        printf("Numero e PAR");
    }
    else{
        printf("Numero IMPAR");
    }
    return 0;
}