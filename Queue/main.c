#include "header.h"

int main()
{
    Queue Q;
    int maxs, x, data;

    printf("Enter the maksimum of Queue : "); scanf("%d", &maxs);
    CreateEmpty(&Q, maxs);

    printf("\n");

    int fill;

    for(x=1; x<=maxs; x++)
    {
        scanf("%d", &fill);
        Add(&Q, fill);
    }

    printf("\n");

    PrintQueue(Q);

    printf("\n\n");

    intervals(Q);

    printf("\n\n");

    int half, result;

    printf("Choose a number which will be divided by 2  : "); scanf("%d", &half);
    printf("\n");

    result=halfX(Q, half);

    if(result==0)
    {
        printf("The answer isn't in Queue.\n");
    }
    else
    {
        printf("The answer is in Queue.\n");
    }

    sumQueue(Q);

    return 0;
}
