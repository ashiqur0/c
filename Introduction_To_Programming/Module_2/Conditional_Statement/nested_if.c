#include <stdio.h>
int main() {

    int amount = 12000;

    if (amount >= 5000) {
        printf("I will go CoxBazar\n");

        if (amount >= 10000) {
            printf("I will go to Sent Martin\n");
        } else {
            printf("I will back to home\n");
        }
    } else {
        printf("I will not go\n");
    }

    return 0;
}