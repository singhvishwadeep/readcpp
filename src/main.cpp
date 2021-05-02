#include <iostream>
#include <pthread.h>

using namespace std;

void *print_message_function( void *ptr );

int main () {
	cout << "Hello World" << endl;
	pthread_t t1, t2;
	char *m1 = "Thread 1";
	char *m2 = "Thread 2";
	int  iret1, iret2;
	iret1 = pthread_create( &t1, NULL, print_message_function, (void*) m1);
	iret2 = pthread_create( &t2, NULL, print_message_function, (void*) m2);

	pthread_join( t1, NULL);
	pthread_join( t2, NULL); 

	printf("Thread 1 returns: %d\n",iret1);
	printf("Thread 2 returns: %d\n",iret2);
	
	return 0;
}

void *print_message_function( void *ptr )
{
     char *message;
     message = (char *) ptr;
     printf("%s \n", message);
}



