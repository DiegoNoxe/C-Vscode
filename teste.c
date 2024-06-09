#include <stdio.h>

int calculo(int one, int two, int escolha){
    int valor = 0;

    if(escolha == 1){
     valor = one+two;   
    }
    else{
     valor = one-two;   
    }
    return valor;
}

void comp (int valor)
{   
    if(valor > 100){
        printf("Valor alto!\n");
    }
    else if(valor < 0){
        printf("Deu um número negativo\n");
    }
    else if(valor == 0){
        printf("Zero?\n");
    }
}

int main(){
    int one, two, valor, escolha;
    char name [15];

    printf("Qual e o seu nome?\n");
    gets(name);

    printf("Insira o primeiro numero: \n");
    scanf("%d", &one);

    printf("Insira o segundo numero: \n");
    scanf("%d", &two);

    printf("soma (1)   diminuir (2)\n");
    scanf("%d", &escolha);

    valor = calculo(one, two, escolha);

    printf("Ola, %s! O resultado deu: %d\n", name, valor);
    comp(valor);

    return 0;
}