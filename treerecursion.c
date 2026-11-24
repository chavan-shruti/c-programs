#include<stdio.h>
#include<stdlib.h>

void fun(int n )
{
    if (n > 0)
    {
        printf("%d\n",n);
        fun(n-1);
        fun(n-1);
    }





}




int main()
{
    int a = 3;
     fun(3);

    return EXIT_SUCCESS;
}


//function call = no. of activation record created 
//time complexitity depends on number of calls madhe in function 
// space complexity depends on max height of a stack ( levels of tree ) 