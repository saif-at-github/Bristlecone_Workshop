#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

/*
 * Build with:
 *
 * gcc -g -O0 -o program_1 program_1.c -lpthread
 *
*/
pthread_t tid[2];
int ret[2];

void* doSomeThing(void *arg)
{
    unsigned long x = 0;
    int j = 0;
    int i = (int)arg;

    printf("Thread %d starting...\n", i);
    pthread_t id = pthread_self();


    if(pthread_equal(id,tid[0])) {
        printf("Inside First thread\n");
    } else  {
        printf("Inside Second thread\n");
    }

    printf("Thread %d processing...\n", i);
    for(x=0; x<(0xFFFFFFFF);x++) {
        j++;
    }
    ret[i] = i + 1;
    printf("Thread %d: 0x%lx [ x = 0x%X ]\n",i, id, j);
    printf("Thread %d: 0x%lx exit\n",i, id);

    while(1);
    pthread_exit(&ret[i]);

    return NULL;
}

int main(void)
{
    int i = 0;
    int err;
    int *ptr[2];

    while (i < 2) {
        err = pthread_create(&(tid[i]), NULL, &doSomeThing, (void*)i);
        if (err != 0)
            printf("can't create thread :[%s]", strerror(err));
        else
            printf("Thread %d created successfully\n", i);
        i++;
    }

    i = 0;
    pthread_join(tid[i], (void**)&(ptr[i]));
    printf("Thread %d returned: %d\n", i, *ptr[i]);
    i++;
    pthread_join(tid[i], (void**)&(ptr[i]));
    printf("Thread %d returned: %d\n", i, *ptr[i]);
    i++; // just to show on gdb next command
    return 0;
}