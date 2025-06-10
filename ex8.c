#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Digite tres caracteres: ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    printf("Palavra invertida: %c-%c-%c\n", c3, c2, c1);

    return 0;
}