#include<stdio.h>
#pragma pack(1)

struct demo
{
    int i ;
    int j ;
    int k ;

};

int main()
{
    struct demo arr[4] ;

    arr[1].i= 11;
    arr[1].j= 21;
    arr[1].k= 31;

    arr[2].i= 41;
    arr[2].j= 51;
    arr[2].k= 61;
    
    arr[3].i= 71;
    arr[3].j= 81;
    arr[3].k= 91;

    printf("%d\n",arr[1].i);
    printf("%d\n",arr[1].j);
    printf("%d\n",arr[1].k);

    printf("%d\n", arr[2].i);
    printf("%d\n", arr[2].j);
    printf("%d\n",arr[2].k);

    printf("%d\n",arr[3].i);
    printf("%d\n",arr[3].j);
    printf("%d\n",arr[3].k);


    printf("%d\n", sizeof(arr));


    return 0;

}