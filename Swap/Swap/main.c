#include <stdio.h>
#include <string.h>


void swap(void *vp1, void *vp2, int size)
{
    char buffer[sizeof(double)];

    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
}

main()
{

    double x = 1.234567;
    double y = 2.468468;

    swap(&x, &y, sizeof(double));
    
    printf("x = %f\n", x);
    printf("y = %f\n", y);
}
