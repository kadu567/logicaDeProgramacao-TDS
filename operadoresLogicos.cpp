#include <iostream>

int main(){
    int a, b;

    // Solicita ao usuario para digitar dois numeros
printf("Digite o primeiro numero (0 ou 1): ");
scanf("%d", &a);
printf("Digite o segundo numero (0 ou 1): ");
scanf("%d", &b);

// Operador AND
printf("\nOperador and (&&):\n");
printf("%d && %d = %d\n", a, b, a && b);

// Operador OR
printf("\nOperador OR (||): \n");
printf("%d || %d = %d\n", a, b, a || b);

// Operador NOT
printf("\nOperador NOT (!):\n");
printf("!%d = %d\n", a, !a);
printf("!%d = %d\n", b, !b);

return 0;

}