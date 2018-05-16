
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>



int main(int argc, char const *argv[])
{
	int threads = 5, i = 0, ret = -1;

pthread_t * thread = malloc(sizeof(pthread_t)*threads);

for (i = 0; i < threads; i++) {

    ret = pthread_create(&thread[i], NULL, &foobar_function, NULL);
   printf("thread %d\n",ret );

    if(ret != 0) {
        printf ("Create pthread error!\n");
        exit (1);
    }
}
	
	return 0;
}