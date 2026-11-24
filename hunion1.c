#include<stdio.h>
union demo 
{
   int i ;
   float f ;
    double d ;
    char ch ;

};

int main()
{
  union demo dobj;

  dobj.i =21;
  dobj.f=21.3f;
  dobj.d=12.2222;
  dobj.ch='d';

  printf("%d\n",sizeof(dobj));
  
  printf("%d\n",dobj.i);
  


    return 0 ;
}