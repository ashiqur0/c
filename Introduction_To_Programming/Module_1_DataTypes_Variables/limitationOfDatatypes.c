#include <stdio.h>
int main() {

    int num = 1000000032;   // 10^9
    long long int num2 = 1000000032101234567;// 10^18
    
    printf("%d\n", num);
    printf("%lld\n", num2);

    float price = 10000.12300;   // 9 digit
    double price2 = 10000000321.0123456;// 18 digit
    
    printf("%f\n", price);
    printf("%lf\n", price2);

    return 0;
}