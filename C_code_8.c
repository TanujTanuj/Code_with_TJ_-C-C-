#include <stdio.h>

int main() {
  int n, rev = 0, r, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (temp == rev)
        printf("%d is a palindrome.", temp);
    else
        printf("%d is not a palindrome.", temp);

    return 0;
}