#include<stdio.h>

   // global variable 
   int  value1 = 10 ;
   int value2= 11;                   // local v - stack 
   int  ans = 0;                      // global v - data 


int main()
{
   
ans = value1 + value2;

printf(" addition is : %d\n",ans);


    return 0; 
}
