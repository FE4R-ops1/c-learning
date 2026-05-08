#include <stdio.h>
int main(){
    char name[50];
    float salario;
    float porcentual;
    float atualsalario;
    printf("Qual o seu nome? ");
    scanf("%s", &name);
    printf("Qual o seu salario? ");
    scanf("%f", &salario);
    printf("Qual a porcentagem de aumento? ");
    scanf("%f", &porcentual);
    atualsalario = salario * porcentual / 100 + salario;
    printf("Olá %s, seu salario atual e: %.2f", name, atualsalario);
}