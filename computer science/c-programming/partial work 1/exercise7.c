#include <stdio.h>
int main(){
    char name[50];
    float preco, porcentual, valorfinal;
    printf("Digite o nome do produto: ");
    scanf("%s", name);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto ");
    scanf("%f", &porcentual);
    valorfinal = preco * porcentual / 100 - preco;
    printf("Produto: %s\n", name);
    printf("Preço fnal: %.2f\n", valorfinal);
    return 0;
}