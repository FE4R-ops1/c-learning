//do one code where read value for two numbers and payment shape determine that, in case of debit, a 20% discount will be received
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    float valor, valorfinal, desconto;
    char pagamento[10];
    while(1){
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("Digite a forma de pagamento (credito ou debito): ");
        scanf("%9s", pagamento);
        if(strcmp(pagamento, "debito") == 0){
            desconto = valor * 0.20;
            valorfinal = valor - desconto;
            printf("você recebeu desconto!!\n");
            printf("Valor original: %.2f\n Valor com desconto: %.2f\n", valor, valorfinal);
            break;
        }
        else if(strcmp(pagamento, "credito") == 0){
            printf("Infelizmente você perdeu seu desconto!!\n");
            printf("valor do produto: %.2f\n", valor);
            break;
        }
        else{
            printf("comando inválido!!\n");
        }
    }

    return 0;
}
