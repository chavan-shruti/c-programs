#include<stdio.h> 



void Addition ( int no1 , int no2 )
{
    int result =0 ;                           // result is local v of gloabal v addition
    result = no1 + no2 ;                     // buisnees logic
    printf("Addition is : %d\n", result );
}


int main()
{
  int value1=0, value2=0 ;               // local v initialised with its default value 0 

  
printf("Enter first number:\n");
scanf("%d",&value1);

printf("Enter second number:\n");s
scanf("%d", &value2);


  Addition( value1 , value2 );    // function call   to line 3 


return 0; 
}