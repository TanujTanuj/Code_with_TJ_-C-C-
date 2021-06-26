/* Programme -- Decimal to binary conversion */

#include<stdio.h>
#include<math.h>
int Decimal2binary(int);

int main(){
    
    int number,binary ;
    
    scanf("%d",&number);
    
    binary = Decimal2binary(number);
    
    printf("Decimal to binary conversion of %d is %d \n ", number,binary);
    
}

int Decimal2binary(int number){
    
    int binary = 0, i = 1, remainder;
    
    while(number != 0)
    {
        
        remainder = number%2;
        
        number = number/2 ;
        
        binary = binary + remainder*i;
        
        i = i*10;
    }
    
    return binary;
}

    int bninary2decimal(int number)
    
    {
        int decimal = 0 , i = 0, lastdigit;
        
        while(number != 0){
            
            lastdigit = number%10;
            
            number = number/10;
            
            decimal = decimal + lastdigit*pow(2,i);
            
            i++;
        }
        
        return decimal;
    }