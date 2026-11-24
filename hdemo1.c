#include<stdio.h>
struct demo
{
   int i ; 
   float f;
   double d;
  
  struct hello
  {
    int j ;
    char ch ;
    int*no ;

  }hobj;
   

};

int main()
{

    int m =21; 
   struct demo dobj;
   struct demo hobj;
 
   dobj.hobj.no=&m ;
   dobj.hobj.j=11;
   dobj.f=21.21f;
   dobj.d=21.444445;
   dobj.hobj.ch='S';


   printf("%d\n", sizeof(hobj));
   printf("%d\n",sizeof(dobj));
   printf("%f\n",dobj.f);
   printf("%c\n",dobj.hobj.ch);
   printf("%d\n",*dobj.hobj.no);

   

return 0;
}