#include <stdio.h>

int main() {
char operador = '+';
int numero1 = 0;
int numero2 = 0;
int resultado = 0;
printf("número: ");
scanf("%d" , &numero1);
printf("operador: ");
scanf ("%d" , &operador);
printf("número: ");
scanf("%d" , &numero2);

switch (operador)
{
case '+':
    resultado = numero1 + numero2;
    break;
case '-':
    resultado = numero1 - numero2;
case '*':
    resultado = numero1 * numero2;
case '/':
    resultado = numero1 / numero2;

default:
    printf ("Operadoe invalido");
}
printf("Resultado: %d\n", resultado);

}