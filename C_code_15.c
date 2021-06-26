/* Programme -- To swap two numbers */

#include<stdio.h>
#include<conio.h>

int main()
{
    
    int a,b;
    
    printf("Enter First number");
    
    scanf("%d",&a);
    
    printf("Enter the second number");
    
    scanf("%d",&b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("Values of a and b after swapping are %d %d \n",a,b);
    
    getch();
}