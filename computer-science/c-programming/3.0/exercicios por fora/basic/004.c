#include <stdio.h>

int main(){
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if(nota > 60){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado");
    }
    return 0;
}