#include<stdio.h>
#include<stdlib.h>

void fun(int n)
{
  if (n>0)
  {
    fun(n-1);          // recursive function is the first statement of the function :- HEAD RECURSION
    printf("%d",n);     // head recursion : all operation are performed at RETURNING TIME 

  }



}


int main()
{

    int a = 5 ;
    fun(a);


    return EXIT_SUCCESS ;
}



// head recursion are not easy to directly convert into loop 
// every tail recursion can be converted to loop : in this case loop is always prefered becoz loop is more efficient in SPACE COMPLEXITY 
