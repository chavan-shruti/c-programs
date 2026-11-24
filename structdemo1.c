#include<stdio.h>

#pragma pack(1)
 struct demo
 {
    int i ;
    float f;
    char ch ;

 };
   


 int main()
{
    struct demo dobj1 ;
    struct demo dobj2 ;

    struct demo*dp=NULL ;
    dp=&dobj2;

   
    dp->i=21;
    dp->ch='B';
    dp->f= 90.009f ;

     dobj1.i=11;
    dobj1.ch ='A';
    dobj1.f=90.009f;



    printf("%d %c %f \n",dobj1.i ,dobj1.ch, dobj1.f);       // 11 A 90.009
    printf("%d\n",dp->i);                                   // 21


    
    
    return 0;
}