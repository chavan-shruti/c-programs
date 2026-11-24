#include<stdio.h> 



int Addition ( int no1 , int no2 )
{
    int Result =0 ;                           // result is local v of gloabal v addition
    Result = no1 + no2 ;                     // buisnees logic
  return Result ;

}


int main()
{
  int value1=0, value2=0 , Ans=0 ;               // local v initialised with its default value 0 

  
printf("Enter first number:\n");
scanf("%d",&value1);

printf("Enter second number:\n");
scanf("%d",&value2);


  Ans = Addition( value1 , value2 );    // function call   to line 3 

  printf("Addition is :%d\n", Ans ); 

return 0; 
}