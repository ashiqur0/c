#include <stdio.h>
int main() {

    int n, mx = -100000000;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (mx < num) {
            mx = num;
        }
    }
    
    printf("%d\n", mx);

    return 0;
}