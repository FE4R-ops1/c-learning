#include <stdio.h>
int main(){
    float distance, combustivel, consumo;
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distance);
    printf("Digite o combustivel gasto (em litros): ");
    scanf("%f", &combustivel);
    consumo = distance / combustivel;
    printf("O consumo medio do veiculo e: %.2f km/l\n", consumo);
    return 0;  
}