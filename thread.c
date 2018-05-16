
#include <stdio.h>
#include <pthread.h> 
#define NUM_THREADS 4 

void *hello(void *pArg){
	int *p = (int*)pArg ;
	int myNum = *p ;

	printf("hello thread id : %d\n",myNum);
	return 0 ;
}
int main()  {
	int i ;
	pthread_t tid[NUM_THREADS] ;
	for (i = 0; i < NUM_THREADS; ++i)
	{
		pthread_create(&tid[i],NULL,hello,&i) ;
	}
	for ( i = 0; i < NUM_THREADS; ++i)
	{
		pthread_join(tid[i],NULL);
	}
	return 0 ;
  }
