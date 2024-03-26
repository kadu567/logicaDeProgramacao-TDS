#include <iostream>

int main() {

    char nome(100);
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Ola %s! Voce tem %d anos. \n", nome, idade);

    return 0;
}