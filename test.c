/*
 * The fork() function
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
int GenerateRandom(int lower, int upper)
{
    int i;
    
        int num = (rand() %
           (upper - lower + 1)) + lower;
       
    return num ;
}


int main()
{
  pid_t pid ;
  int i ;
  printf("The Parent id  : %d\n",getpid());
  do{
    i = GenerateRandom(3,8) ;
    sleep(i) ;
  
  
  if(fork() == 0){
    printf("new Customer : %d\t arraived after %d\n ",getpid(),i);
    while(1) ;

  }
  
  }while(1) ;  
    
  return(0);
}
