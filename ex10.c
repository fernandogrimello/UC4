#include <stdio.h>

int main() {
    int a = 1, b = 3, temp;

    printf("Valores antes da troca: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}