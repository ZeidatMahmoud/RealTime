
#include <stdio.h>
#include <pthread.h> 
#define NUM_THREADS 5

void *hello(void *pArg){
	int *p = (int*)pArg ;
	int myNum = *p ;

	if(myNum == 0){
		knafeh() ;

	}
	else if(myNum ==1){
		sweet() ;
	}
	else if(myNum ==2){
		mtabak() ;
	}
	else if(myNum ==3){
		Qatayef() ;
	}
	else if(myNum ==4){
		mshakal() ;
	}
	return 0 ;
}
void knafeh(){
	printf("knafeh\n");
}
void sweet(){
	printf("Sweet\n");
}
void mtabak(){
	printf("mtabak\n");
}
void Qatayef(){
	printf("Qatayef\n");
}
void mshakal(){
	printf("mshakal\n");
}
void printt(pthread_t tid[]){
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",tid[i] );
	}
}
int main()  {
	int i ;
	pthread_t tid[NUM_THREADS] ;
	for (i = 0; i < NUM_THREADS; ++i)
	{
		int q = pthread_create(&tid[i],NULL,hello,&i) ;	
		sleep(1);
		printf("%d\n",q );
	}
	for ( i = 0; i < NUM_THREADS; ++i)
	{
		pthread_join(tid[i],NULL);
	}
	printt(tid) ;
	return 0 ;
  }
