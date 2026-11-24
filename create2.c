#include<stdio.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>            // system call availabe ahe hya header file madhe 



int main()
{

 int fd =0 ;

 fd=creat("hello.txt",0777);

 if(fd==-1)
 {
      printf(" unable to create the file \n ");
          return -1 ;
 }
else 
{
   printf(" file gets created with fd : %d \n",fd );
   return 0; 
}

}


// the linux prog