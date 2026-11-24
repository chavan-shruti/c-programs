#include<stdio.h>

#pragma pack(1)

struct hello
{
  int i;
  float f;
  int arr[2] ;
};
int main ()
{
   struct hello hobj ;
   hobj.i=11;
   hobj.f=21;
   hobj.arr[0]=51;
   hobj.arr[1]= 101;



   printf("%d\n",sizeof(hobj));  //16 byt 
   printf("%d\n", hobj.i );       //11
   printf("%d\n", hobj.arr[1]);    //101

    return 0 ;
}