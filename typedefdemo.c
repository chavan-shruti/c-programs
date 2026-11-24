#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT ;   // compiler handles 
typedef unsigned long int ULONG ; 

int main()
{
    UINT i = 11 ;        //gets automatically converted unsigned int =11 ;  
    ULONG j = 21 ;

    printf("inside tydefdemo\n");
    printf("%d \n",sizeof(i));
    printf("%d \n",sizeof(j));



    return 0 ;
}