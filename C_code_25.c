/* Programme -- Binary to octal conversion */

#include <math.h>
#include <stdio.h>
int convert(long long num);
int main() {
    long long num;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    printf("%lld in binary = %d in octal", num, convert(num));
    return 0;
}

int convert(long long num) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (num != 0) {
        dec += (num % 10) * pow(2, i);
        ++i;
        num /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}    