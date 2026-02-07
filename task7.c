#include <stdio.h>

int main(void) {
    int i = 10;
    float f = 3.14f;
    double d = 123.456789;
    char c = 'A';

    printf("Integer value: %d\n", i);
    printf("Float value: %.2f\n", f);
    printf("Double value: %.6lf\n", d);
    printf("Character value: %c\n", c);

    return 0;
}
