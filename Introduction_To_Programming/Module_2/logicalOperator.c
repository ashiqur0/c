#include <stdio.h>
int main() {

    int a = 10, b = 5;

    printf("%d\n", a > b && a >( 2 * b));
    printf("%d\n", a > b || a >( 2 * b));
    printf("%d\n", !b);

    return 0;
}