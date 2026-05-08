#include <stdio.h>
int main(){
    char name[50];
    int idade;
    float altura;
    printf("Digite seu nome: ");
    scanf("%s", &name);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Nome: %s\n", name);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    return 0;
}