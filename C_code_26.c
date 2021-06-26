/* Programme -- Linear search programme */

#include<stdio.h>

int main()
{
    int A[] ={100,5,201,13,5,-8,12,-8,3,-8};
    
    int i,key,position =-1;
    
    int A_size = sizeof(A)/sizeof(int);
    
    printf("The elements of arrray are : \n");
    
    for(i = 0 ; i < A_size ; i++ ){
        
        printf("A[%d] = %d \n ", i,A[i]);
        
    }
    
    printf("Enter the elements to be searched :");
    
    scanf("%d", &key);
    
    for(i = 0 ; i<A_size; i++){
        
        if(key == A[i]){
            
            position = i;
            
            break;
        }
        
    }
    
    if(position == -1){
    
    printf("The element %d is not avialable \n",key);
    

        }
        
        else {
            
            printf("The element %d is available at position %d \n ", key,position);
        }  
            return 0;
        
}