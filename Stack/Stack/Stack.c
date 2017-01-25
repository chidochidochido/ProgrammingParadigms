#include "Stack.h"
#include <stdlib.h>
#include <assert.h>

void stackNew(stack *s)
{
    s->logicalLength = 0;
    s->allocatedLength = 4;
    s->elems = malloc(4 * sizeof(int));
    assert(s->elems != NULL);
}