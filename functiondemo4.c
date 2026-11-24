#include<stdio.h> 



int main()
{
  int value1=0, value2=0, ans=0 ;       // local v initialised with its default value 0 

  
printf("Enter first number:\n");
scanf("%d ",&value1);

printf("Enter second number:\n");
scanf("%d",&value2);

  ans = value1 + value2 ;            // business logic +

printf("addition is : %d\n", ans ) ;

return 0; 
}