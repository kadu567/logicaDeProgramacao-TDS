#include <iostream>

int main () {
    int numero;
    int numero2;
    printf("digite um numero: " );
    scanf("%d" , &numero);
    printf("Voce digitou : %d" , numero);

    printf("\t digite outro numero: ");
    scanf("%d" , &numero2);
    printf("Voce digitou : %d" , numero2);

    int multiplicacao = numero * numero2;
    printf("\n multiplicacao: %d * %d = %d\n", numero, numero2,  multiplicacao);


    int resultado;
    return 0;
}