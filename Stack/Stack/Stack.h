typedef struct
{
    int *elems;
    int logicalLength;
    int allocatedLength;
} stack;

void stackNew(stack *s);
void stackDispose(stack *s);
void stackPush(stack *s, int value);
int stackPop(stack *s);