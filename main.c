#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t Gb = 1024*1024*1024;

    void *a = malloc(2 * Gb);
    void *b = malloc(2 * Gb);

    printf("use %%x:   a=%x\n", a);
    printf("use %%x:   b=%x\n", b);

    printf("use %%lx:  a=%lx\n", a);
    printf("use %%lx:  b=%lx\n", b);

    printf("use %%llx: a=%llx\n", a);
    printf("use %%llx: b=%llx\n", b);

    printf("use %%p:   a=%p\n", a);
    printf("use %%p:   b=%p\n", b); 

    exit(0);
}

