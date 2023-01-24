#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
/*
g++ -g program_2.c -lpthread -o program_2
*/
using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   cout << "Hello World! Thread ID, " << tid << endl;
   sleep(20);
   for (int j=0; j<100000000; j++)
   {
    //do nothing 
    //just to provide delay
   }
   cout << "Exiting Thread ID, " << tid << endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   int i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void*)&i);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}