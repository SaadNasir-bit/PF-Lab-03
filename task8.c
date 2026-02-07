#include <stdio.h>

int main(void) {
    int i;
    float f;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a decimal: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c);   

    printf("\nYou entered:\n");
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);

    return 0;
}
