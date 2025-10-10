#include <stdio.h>
int main() {

    int a = 10, b = 3;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Summation: %d\n", sum);
    printf("Subtract: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
}