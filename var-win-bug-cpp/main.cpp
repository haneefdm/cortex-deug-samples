#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#if defined(__CYGWIN__)
#include <errno.h>
int usleep(useconds_t useconds)
{
    struct timespec ts;

    ts.tv_sec = (long int)useconds / 1000000;
    ts.tv_nsec = ((long int)useconds % 1000000) * 1000;
    if (!nanosleep(&ts,&ts)) return 0;
    if (errno == EINTR) return ts.tv_sec;
    return -1;
}

#endif

const int incr = 100;   // ms

int mySleep(int timeout) {
    std::cout << "Sleeping for " << timeout << std::endl;    
    usleep(timeout * 1000);
    return timeout + incr;
}

int main(int argc, char **argv)
{
    char helpText[] = "Attach a debugger and execute 'set foo=0' to continue";
    char helloText[] = "Hello World!";
    int i, flag;
    volatile int foo = 1;

    std::cout << helloText << std::endl;

    int timeout = incr;
    // Set breakpoint at nxt line, expand argv in Variables window and keep hitting the
    // Step-Over button. All of a sudden, you will the Variables window go blank and then
    // back to its default state and 'argv' is collapsed
    timeout = mySleep(timeout);         // <=== place breakpoint here
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);         // Somewhere near here, things go bad
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);
    timeout = mySleep(timeout);

    for (;;) {
        mySleep(1000);
        timeout++;
    }

    // Place breakpoint below and make sure 'argv' is still expanded and cotinue.
    // Randomly pause debugger giving about a second between pauses. Tree loses state.
    std::cout << helpText << std::endl; // <=== place breakpoint here
    // Pausing debugger on cygwin may not work easily -- try one or more Control-Cs
    // and, it won't stop in this function but rather in some other cygwin thread that
    // handles signals.
    while (foo) {
        // Attempt a calculation without using any function calls
        for(i=2; i < (1 << 30); ++i)
        {
            // i is a prime number, flag will be equal to 1
            flag = 1;
            for(int j=2; j <= (i / 2); ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) {
                // Yes, we have a prime number
                // std::cout << i << ' ';
            }
        }
        std::cout << std::endl << "Anouther round" << std::endl ;
    }
    return 0;
}
