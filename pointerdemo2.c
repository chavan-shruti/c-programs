#include<stdio.h>
int main() 
{
  
  char ch='A';
  int no = 11;
  float marks= 90.54 ;
  double d= 32.11111;

  char*cp=&ch;
  int*ip=&no;
  float*fp=&marks;
  double*dp=&d ;

 
printf("%d\n",(void*)cp);  
printf("%d\n",(void*)ip);  
printf("%d\n",(void*)fp);  
printf("%d\n",(void*)dp);



    return 0;
}