#include <stdio.h>
int
main ()
{
  
int n, temp, r, result = 0;
  
printf ("Enter a three-digit integer: ");
  
scanf ("%d", &n);
  
temp = n;
  
 
while (temp != 0)
    {
      
	// remainder contains the last digit
	r = temp % 10;
      
 
result += r * r * r;
      
 
	// removing last digit from the orignal number
	temp /= 10;
    
}
  
 
if (result == n)
    
printf ("%d is an Armstrong number.", n);
  
  else
    
printf ("%d is not an Armstrong number.", n);
  
 
return 0;

}
