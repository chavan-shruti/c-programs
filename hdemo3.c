#include<stdio.h>

struct demo
{
   int i ;
   float f;
   double d ;


};

int main()
{
 struct demo dobj ;

 struct demo*p = NULL ;
 p = &dobj ;
 p->i=21;
 p->f=21.33f;
 p->d =31.77777;

 printf("%d\n",p->i);







    return 0;
}