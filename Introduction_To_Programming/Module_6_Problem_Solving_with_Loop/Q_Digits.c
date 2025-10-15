#include <stdio.h>
int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        while (num) {
            printf("%d ", num % 10);
            num /= 10;
        }

        printf("\n");
    }

    return 0;
}