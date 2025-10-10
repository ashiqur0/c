#include <stdio.h>
int main() {

    int amount = 100;

    if (amount >= 100) {
        printf("I will buy a Burger");
    } else if(amount >= 50) {
        printf("I will buy a Pizza");
    } else {
        printf("I will not buy a Burger");
    }

    return 0;
}