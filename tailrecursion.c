#include<stdio.h>
#include<stdlib.h>

void fun(int n)
{

 if ( n> 0)
 {
  printf("%d\n", n);
  fun(n-1);                       // recursive function is at last statement - all operation performed at CALLING TIME 
 }

}





int main()
{

    int x =3 ;
    fun(3);



   return EXIT_SUCCESS;

}