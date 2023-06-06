#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, resultado;

    printf("\n===========================\n");
    printf("      Algoritmo 18        ");
    printf("\n===========================\n\n");
    printf("Escreva um número: ");
    fflush(stdin);
    scanf("%d", &num);

    resultado = num + 1;

    printf("\n---------------------------\n");
    printf("\nresultado: %d\n", resultado);
    printf("\n---------------------------\n");

    printf("\n\n\n");

    system("pause");
}
