// Control Statement: break, continue 

#include <stdio.h>
int main() {

    for (int i = 0; i < 15; i++) {
        if (i==10) {
            break;
        }

        if (i % 3 == 0) {
            continue;
        }
        
        printf("%d\n", i);
    }

    return 0;
}