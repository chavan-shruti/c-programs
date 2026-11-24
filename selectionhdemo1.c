#include<stdio.h>
int main()
{
    int std = 0 ;
    printf("Enter your standard :\n");
    scanf("%d",&std );
    if (std==1)
    {
        printf("Your exam is at 10:00 am \n");
    }

    else if (std==2)
    {
        printf("your exam is at 11:00am \n");
    }
 else if ( std==3)
 {
    printf("your exam is at 12:00 pm \n");

 }

 else{
    printf("INVALID ENTRY");
 }
    return 0 ;

}