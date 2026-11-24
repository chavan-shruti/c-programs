#include<stdio.h>
union demo 
{

    int i;
    char ch;

};

int main()
{
  
    union demo dobj ;

    dobj.i=65;

    printf("%d\n", dobj.i);          // 65 
    printf("%c\n",dobj.ch);           // A - output yenar beocz 65 is ascii(american standard code for information interchange ) value of capital a



    return 0;

}