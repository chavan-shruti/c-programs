#include<stdio.h>

int main ()
{
 int Arr[]={11,21,51,101,111};
 
 printf("%d\n",Arr[2]);   // 51             // becoz all expression are internallly treated
 printf("%d\n",*(Arr+2));   // 51              * (base add of array + 2 * size of (array_type))
 printf("%d\n",*(2+Arr));   // 51 
 printf("%d\n",&2[Arr]);       //51 


// &Arr[2] :
// (Arr+2):     
// &2[Arr]:    we will get base address of 3rd element  
// (2+Arr):

    return 0;
}