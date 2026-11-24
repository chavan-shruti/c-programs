#include<stdio.h>
int main()
{
  int std = 0 ;
  printf("Enter Your Class:\n");
  scanf("%d", &std) ;

  switch(std)
  {
    case 10:
    printf("your prelims not sceduled yet ");
    break;

    case 12:
    printf("your prelims are on 21st sep 2026 ");
   break ;

   case 9 :
   printf("exam on 22nd on sep");
   break;

   defaulf:
   printf("Invalid data ");


  }



    return 0 ;
}