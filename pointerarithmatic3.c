#include<stdio.h>
int main ()
{
 int Arr[]={11,21,51,101,111};
 
 int*p=NULL;
 int*q=NULL;

p=&(Arr[1]);      //21
q=&(Arr[3]);         //101


printf("%d\n",(q-p));        // *(&q-&p/sizeof(ptr_type)) 
printf("%d\n", (p+8));        // *(&p+2*sizeof(ptr_type))
printf("%d\n",(p-2));         //*(&p-2*sizeof ptr type )
printf("%d\n",(q-1));       // ''   ''

    return 0;
}