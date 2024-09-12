#include <stdio.h>

int main(){
    
    int lado1, lado2, lado3;
    
    printf("Digite o primeiro lado:");
    scanf("%d",&lado1);
    printf("Digite o segundo lado:");
    scanf("%d",&lado2);
    printf("Digite o terceiro lado:");
    scanf("%d",&lado3);
    if(lado1==lado2 && lado2==lado3 && lado1==lado3){
        printf("equilátero");
    }else{
        if(lado1==lado2 || lado3==lado2 || lado3==lado1){
            printf("isósceles");
        }else{
            if(lado1!=lado2 && lado3!=lado1 || lado3!=lado2){
                printf("escaleno");
            }
        }
    }
    

    return 0;
}