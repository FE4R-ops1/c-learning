#include <stdio.h>
int main(){
    float horas, minutos, segundos;
    printf("Digite o tempo em horas: ");
    scanf("%f", &horas);
    minutos = horas * 60;
    segundos = horas * 3600;
    printf("%f horas equivalem a %f minutos e %f segundos\n", horas, minutos, segundos);
    return 0;
}