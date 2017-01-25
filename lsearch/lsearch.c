#include <stdio.h>

int lsearch(int key, int array[], int size) 
{
    int i;

    for(i = 0; i < size; i++) 
    {
       if(array[i] == key) 
       {
           return i;
       }
    }
    return -1;
}

main() 
{
    int array[] = {1, 2, 3, 4, 5};
    int key = 6;

    printf("%d\n", lsearch(key, array, sizeof(array)/sizeof(int)));
}