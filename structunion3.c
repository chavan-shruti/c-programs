#include<stdio.h>

union demo 
{

    int i; 
    float f;

};

int main()
{
  union demo dobj ;

  dobj.f=11.0;
  dobj.i=11;

  
    return 0;
}