
#include <signal.h>
#include <stdio.h>


void signal_handler(int num)
{
    printf("Signal Handeled: %d\n", num);
    //abort();
    return;
}


int main()
{
    /* Signal handler registration*/
    signal(SIGINT, signal_handler);
    //signal(SIGABRT, signal_handler);
    
    while(1);
}