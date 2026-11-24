#include<stdio.h>
int main ()
{
  
  char ch ='A';
  int no = 11;
  float marks= 90.54 ;
  double d= 32.11111;

  char*cp=&ch;             //specific pointer 
  int*ip=&no;              //specific pointer 
  float*fp=&marks;            //
  double*dp=&d;            //


   
printf("%d\n",sizeof(cp));     //8
printf("%d\n",sizeof(*cp));    //1
printf("%d\n",sizeof(ch));     //1



    return 0;
}