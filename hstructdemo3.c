#include<stdio.h>
#pragma pack (1)
  struct hello 
  {
    int i ;
    float f ;
    struct demo
    { 
        int j ;
        int k ;
        float d;

    }dobj;

    
  };


  int main()

  {

    struct demo dobj ;
    struct hello hobj ;


    hobj.i = 1;
    hobj.f=1.00f;
    dobj.j= 2;
    dobj.k=3;
    dobj.d=4.00f;  
  

    printf("%d\n %d\n %f \n",dobj);
    printf("%d\n %f\n",hobj);
    printf("%d\n",sizeof(dobj));
    printf("%d\n",&dobj)
    ;

    return 0;
  }