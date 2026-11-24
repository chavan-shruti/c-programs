#include<stdio.h>
#pragma pack (1)
struct demo 
{
 int i ;
 float f;
 struct hello
 {
    int no ;
    float marks ;

 }hobj;



};

int main ()
{
 struct demo dobj;

 printf("%d\n",sizeof(dobj));

 dobj.i=11;
 dobj.f=12.22f;

 dobj.hobj.no=21;
 dobj.hobj.marks=31.3f;

 

    return 0; 
}