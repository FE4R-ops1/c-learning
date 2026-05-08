#include <stdio.h>
int main(){
    char name[50];
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    printf("Digite o nome do aluno: ");
    scanf("%s", &name);
    printf("Digite a primeira nota:" );
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    media = n1 + n2 + n3 + n4 / 4;
    printf("A media de aluno %s e: %.2f", name, media);
    return 0;
    
}