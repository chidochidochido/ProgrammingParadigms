#include <stdio.h>
#include <string.h>


void swap(void *vp1, void *vp2, int size)
{
    char buffer[sizeof(int)];

    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
}

main()
{

    int x = 8;
    float y = 8.0;

    swap(&x, &y, sizeof(x));
    
    printf("x = %d\n", x);
    printf("y = %f\n", y);
}
