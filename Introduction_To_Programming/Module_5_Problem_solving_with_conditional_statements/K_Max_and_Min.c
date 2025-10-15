#include <stdio.h>
int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int mn = a;
    if (mn > b) {
        mn = b;
    }
    if (mn > c) {
        mn = c;
    }

    int mx = a;
    if (mx < b) {
        mx = b;
    }
    if (mx < c) {
        mx = c;
    }

    printf("%d %d\n", mn, mx);

    return 0;
}