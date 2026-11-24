#include<stdio.h>

int main ()
{
 int Arr[]={11,21,51,101,111};
 
 int*p=NULL;
 int*q=NULL;

 p=&(Arr[1]);
 q=&(Arr[3]);

printf("%d\n",*p);  //21

p=p+3;                       // *(&p + 3*(sizeof(int)))
printf("%d\n",*p);  //111      // *(&P + 3*4  )





    return 0;
}