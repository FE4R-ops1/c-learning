// Leia dois números e exiba a soma, subtracao, multiplicacao, divisão

#include <stdio.h>
#include <ctype.h>

int main(){

    int nums[2], count, soma, sub, mult, div;
    for(count=0; count<=2; count ++){
        printf("Digite um número: ");
        scanf("%d", &nums[count]);
    }
    soma = nums[0] + nums[1];
    sub = nums[0] - nums[1];
    mult = nums[0] * nums[1];
    div = nums[0] / nums[1];
    printf("os números são: %d, %d\n Soma = %d\n Subtracao = %d\n Multiplicacão = %d\n Divisão = %d\n", nums[0], nums[1], soma, sub, mult, div);

    return 0;
}
