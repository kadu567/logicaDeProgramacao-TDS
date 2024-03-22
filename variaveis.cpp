#include <iostream>

int main () {
// Declara e inicia variaveis
int numero = 10;
float pi = 3.14159;
char letra = 'A';
std::string nome = "Ana";
bool IsTrue = true;

// Usando printf para formatar e imprimir os valores das variaveis
printf("numero: %d\n", numero);
printf("pi: %.2f\n", pi);
printf("letra: %c\n", letra);
printf("nome: %s\n", nome.c_str());
printf("IsTrue: %d\n",IsTrue);

//Retorna 0 para indicar sucesso
return 0;
}
