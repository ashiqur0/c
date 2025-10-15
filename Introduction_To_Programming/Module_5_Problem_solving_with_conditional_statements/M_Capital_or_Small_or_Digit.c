#include <stdio.h>
int main() {

    char c;
    scanf("%c", &c);

    if (c >= 48 && c <= 57) {
        printf("IS DIGIT\n");
    } else {
        printf("ALPHA\n");

        if (c >= 65 && c <= 90) {
            printf("IS CAPITAL\n");
        } else if (c >= 97 && c <= 122) {
            printf("IS SMALL\n");
        }
    }

    return 0;
}