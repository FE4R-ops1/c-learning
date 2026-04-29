#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num == 0){
        printf("seu numero e igual a 0");
    }
    else if(num % 2 == 0){ // necessário por o else if para impor mais condições.
        printf("seu numero e PAR");
    }
    else{
        printf("seu numero e IMPAR");
    }

}