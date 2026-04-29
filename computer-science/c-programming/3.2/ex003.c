#include <stdio.h>

int main(){
    
    int num, count;
    for (count=10; count>=0; count--){
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if(num >= 0){
            printf("%d Positivo\n", num);
        }
        else{
            printf("%d Negativo\n", num);
        }
    }
    return 0;
}