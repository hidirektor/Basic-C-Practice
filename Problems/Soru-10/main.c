#include <stdio.h>

int main() {
    int alfa=16, beta=38;
    int alfa2=16, beta2=38;
    int *a, *b;

    printf("\nMatematiksel Yontem:");
    printf("\nAlfa: %d", alfa);
    printf("\nBeta: %d", beta);

    alfa = alfa + beta;
    beta = alfa - beta;
    alfa = alfa - beta;

    printf("\n\nYeni Alfa Degeri: %d", alfa);
    printf("\nYeni Beta Degeri: %d\n", beta);

    printf("\n\nPointer Yontemi:");
    a = &alfa2;
    b = &beta2;
    printf("\nAlfa: %d", *a);
    printf("\nBeta: %d", *b);
    a = &beta2;
    b = &alfa2;
    printf("\n\nYeni Alfa Degeri: %d", *a);
    printf("\nYeni Beta Degeri: %d", *b);

    return 0;
}
