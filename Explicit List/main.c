#include "header.h"
int main()
{
    printf("\n");

    lists l;
    address p;

    CreateList(&l);

    int num, prev_num, lim, x;

    printf("How many list do you want to insert? : "); scanf("%d", &lim);

    printf("\n");

    for(x=0; x<lim; x++)
    {
        printf("Insert number   : "); scanf("%d", &num);
        InsertFirst(&l, num);
    }
    printf("\n");

    /*
    InsertFirst(&l, 10);
    InsertFirst(&l, 11);
    */
    PrintList(l);

    printf("\n\n");

    int elmnt_tot;

    elmnt_tot=NbElmnt(l);

    printf("Total of Element on the list        : %d \n", elmnt_tot);

    /*
    DeleteFirst(&l, &p);
    PrintList(l);
    */

    printf("\n");

    printf("Insert the number after number      : "); scanf("%d", &prev_num);
    printf("Insert number   : "); scanf("%d", &num);
    InsertAfter(&l, num, prev_num);

    printf("\n");

    PrintList(l);

    printf("\n\n");

    data_mean(l);

    printf("\n");

    sum_Odd(l);

    printf("\n");

    sum_Even(l);

    printf("\n");

    max_list(l);

    printf("\n");

    min_list(l);

    return 0;
}
