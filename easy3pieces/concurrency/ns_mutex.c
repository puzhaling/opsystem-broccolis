#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

typedef struct __ns_mutex_t {
    
} ns_mutex_t;

void ns_mutex_init(ns_mutex_t *m)
{

}


void ns_mutex_acquire(ns_mutex_t *m)
{

}

void ns_mutex_release(ns_mutex_t *m)
{

}

void *worker(void *arg)
{
    return NULL;
}

int main(int argc, char *argv[])
{
    printf("parent: begin\n");
    printf("parent: end\n");
    return 0;
}
