/* Programme -- To find area of the circle */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 
 double r,area; 
 
 printf("Enter the values for radius");
 
 scanf("%lf", &r);
 
 area = 3.14*pow(r,2);
 
 printf("The area of the circle is : %lf",area);
 
 getch();
}