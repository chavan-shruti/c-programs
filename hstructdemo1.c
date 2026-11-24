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
     struct demo dobj1;
     struct demo dobj2;

      dobj1.i=11;
      dobj1.j=21;
      dobj1.k=31;


      dobj2.i=41;
      dobj2.j=51;
      dobj2.k= 0;



      printf("%d \n", dobj1.i , dobj1.j , dobj1.k);
      printf("%d %d %d \n ", dobj2.i , dobj2.j , dobj2.k );
      printf("%d\n",sizeof(dobj1));
      printf("%d\n", sizeof (dobj2));



    return 0;
  }



  //output : 11 21 31 
  //         41 51 0 
  //         12 byte 
  //         12 byte 