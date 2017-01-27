#include <stdio.h>
#include <string.h>

void* lsearch(void *key, void *base, int n, int elemSize) 
{
    int i;

    for(i = 0; i < n; i++) 
    {
       void *elemAddr = (char*)base + i*elemSize;
       if(memcmp(key, elemAddr, elemSize) == 0)
           return elemAddr;
    }
    return NULL;
}

main() 
{
    int array[] = {1, 2, 3, 4, 5};
    int key = 2;

    printf("%d\n", lsearch(&key, array, sizeof(array)/sizeof(int), sizeof(int)));
}