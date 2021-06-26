/* Programme -- To find area of the triangle */

#include<stdio.h>
#include<conio.h>

int main()

{
    float b,h, area;
    
    printf("Enter the width \n");
    
    scanf("%f", &b);
    
    printf("Enter the height \n");
    
    scanf("%f",&h);
    
    area = (0.5)*b*h;
    
    printf("The are of the triangle is %f",area);
    
    getch();
}