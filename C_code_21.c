// Find Greatest between Two using Ternary Operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2, large;
    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    large = (n1>n2) ? n1 : n2;
    printf("\nLargest = %d", large);
    getch();
    return 0;
}