#include <stdio.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    if (num >= 9)
    {
        printf("grupo A\n");
    }
    else if(num >= 7)
    {
        printf("grupo B\n");
    }
    else if(num >= 5)
    {
        printf("grupo C\n");
    }
    else{
        printf("grupo D\n");
    }
    return 0;
}