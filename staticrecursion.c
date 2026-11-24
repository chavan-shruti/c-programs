#include<stdio.h>
#include<stdlib.h>

    int x =0 ;                // global variable 
 int fun( int n)
 {
    
// static int x =0 ; 
    if ( n > 0 ) 
    {
        x++;
        return fun(n-1)+ x   ;
    }

    return EXIT_SUCCESS ;

 }

int main()
{

  int a =5 ;

  printf("%d",fun(a));



    return 0 ;
}



// static and global variable get the memory in code / data section ... single copy is shared by all function calls 
