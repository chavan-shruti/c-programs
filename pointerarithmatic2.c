
#include<stdio.h>
int main ()
{
 int Arr[]={11,21,51,101,111};
 
 int*p=NULL;
 int*q=NULL;

p=&(Arr[1]);
q=&(Arr[3]);


printf("%d\n",*p);       //21
printf("%d\n",*q);      // 101

p++;
q--;

printf("%d\n",*p);    // p ptr ek dabya ne pudh sarkto 21-->51 
printf("%d\n",*q);    // q ptr ek dabya ne magh yeto   101-->51 

    return 0;
}