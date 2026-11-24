#include<stdio.h>
struct demo
{

int i;
float f;
struct demo*p ;


};

int main()
{

struct demo dobj;
struct demo*p = NULL ;

int i =21;
float f=21.22f;
 p = &i ;

printf("%d\n",*(dobj.p));

    return 0;
}