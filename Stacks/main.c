#include "header.h"

int main()
{
    Stack S;
    int size, X;

    printf("Enter the Stack's size  : "); scanf("%d", &size);

    int x, fill;

    printf("\n");

    CreateEmpty(&S, size);

    for(x=0; x<size; x++)
    {
        scanf("%d", &fill);
        push(&S, fill);
    }
    printf("\n");
    printStack(S);
    printf("\n");
    SumStack(S);
    printf("\n");
    SumStackNonTop(S);
    printf("\n");
    ChangeTop(S);
    printf("\n");
    printStack(S);
    printf("\n");

    return 0;
}
