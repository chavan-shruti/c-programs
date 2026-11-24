#include<stdio.h>
#include<stdlib.h>

void fun(int n )
{
    if (n > 0 )
    {
        printf("%d\n", n);
        gun(n-1);
    
    }
}

void gun(int n )
{
   if ( n> 0)
{
   printf("%d\n", n);
   fun( n/2); 

}


}



int main()
{
    int x = 30 ;
    
 fun(30);


    return EXIT_SUCCESS; 
}