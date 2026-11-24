#include<stdio.h>
#pragma pack (1)
struct demo 
{
 int i ;
 float f;
 double d ;


};

int main ()
{
 struct demo dobj;

 dobj.i=11;
  dobj.f=31.4f;
  dobj.d=12.9999;


  printf("%d\n", dobj.i);
  printf("%f\n",dobj.f);
  printf("%lf\n",dobj.d);



    return 0; 
}
