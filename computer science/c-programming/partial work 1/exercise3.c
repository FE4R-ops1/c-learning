#include <stdio.h>
int main(){
    int idade;
    int meses;
    int dias;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    meses = idade * 12;
    dias = idade * 365;
    printf("A sua idade idade em meses e: %d\n", meses);
    printf("A sua idade em dias e: %d\n", dias);
    return 0;
}