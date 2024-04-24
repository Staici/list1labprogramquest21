#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

   int result = (num1%num2 == 0) ? printf("e multiplo %d e multiplo de %d.\n", num1, 4) : printf("nao sao multiplos %d nao e multiplo de %d.\n", num1, num2);


    return 0;
}
