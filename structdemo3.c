#include<stdio.h>

    #pragma pack (1)
    struct demo
   {
      int no;
      int arr[3];


    };

   int main()
   {
     struct demo dobj;
     printf("%d\n",sizeof(dobj));
     
     dobj.arr[0]=11;
     dobj.arr[1]=21;
     dobj.arr[2]=51;

     
     printf("%d\n",dobj.arr[1]);
          printf("%d\n",sizeof(dobj));

    return 0;
   }