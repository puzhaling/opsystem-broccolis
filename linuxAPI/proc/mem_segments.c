#include <stdio.h>
#include <stdlib.h>

char globBuf[65536];
int primes[] = { 2, 3, 5, 7 };

static int square(int x)
{
    int result;
    result = x * x;
    return result;
}

static void
doCalc(int val)
{
    printf("The square of %d is %d\n", val, square(val));
    if (val < 100) {
        int t;
        t = val * val;
        printf("The cube of %d is %d\n", val, t);
    }
}

int main(int argc, char *argv[])
{
    static int key = 9973;
    static char mbuf[10240000];
    char *p;
    p = malloc(1024);
    doCalc(key);

    while(1)
        ;

    exit(EXIT_SUCCESS);
}
