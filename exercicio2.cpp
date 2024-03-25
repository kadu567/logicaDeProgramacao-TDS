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

    int soma = numero + numero2;
    printf("\n soma: %d + %d = %d\n", numero, numero2,  soma);


    int resultado;
    return 0;
}