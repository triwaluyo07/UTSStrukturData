#include "header.h"

address allocate(int X)
{
    address p;

    p=(address)malloc(sizeof(ElementList));
    if(p!=NULL)
    {
        information(p)=X;
        next(p)=NULL;
    }

    return (p);
}

void CreateList(lists *l)
{
    first(*l)=NULL;
}

void InsertFirst(lists *l, int X)
{
    address p;

    p=allocate(X);
    if(p!=NULL)
    {
        next(p)=first(*l);
        first(*l)=p;
    }
}

void DeleteFirst(lists *l, address *p)
{
    (*p)=first(*l);
    first(*l)=next(first(*l));
    next(*p)=NULL;
}

void PrintList(lists l)
{
    address p;

    p=first(l);
    while(p!=NULL)
    {
        printf("[ %d ] ", information(p));
        p=next(p);
    }
}

int NbElmnt(lists l)
{
    int x=0;
    address p;

    if (first(l)==NULL)
    {
        return (0);
    }
    else
    {
        p=first(l);
        do
        {
            x++;
            p=next(p);
        }
        while (p!=NULL);
        return (x);
    }
}

void InsertAfter(lists *l, int X, int prev_X)
{
    address p, new_p;

    (p)=first(*l);

    for(p=first(*l); p!=NULL; p=next(p))
    {
        if(information(p)==prev_X)
        {
            new_p=allocate(X);
            information(new_p)=X;
            next(new_p)=next(p);
            next(p)=new_p;
        }
        else
        {
            if(next(p)==NULL)
            {
                new_p=allocate(X);
                information(new_p)=X;
                next(new_p)=NULL;
                next(p)=new_p;
            }
            p=next(p);
        }
    }
}

void data_mean(lists l)
{
    address p;
    float sum=0, mean=0;
    int tot;

    p=first(l);
    while(p!=NULL)
    {
        sum=sum+information(p);
        p=next(p);
    }

    tot=NbElmnt(l);

    mean=sum/tot;

    printf("Average value of all data on list       : %.2f\n", mean);
}

void sum_Odd(lists l)
{
    address p;
    int sumOdd=0;

    p=first(l);
    while(p!=NULL)
    {
        if(information(p)%2!=0)
        {
            sumOdd=sumOdd+information(p);
        }
        p=next(p);
    }

    printf("Total of all odds number in the list        : %d\n", sumOdd);
}

void sum_Even(lists l)
{
    address p;
    int sumEven=0;

    p=first(l);
    while(p!=NULL)
    {
        if(information(p)%2==0)
        {
            sumEven=sumEven+information(p);
        }
        p=next(p);
    }

    printf("Total of all even number in the list        : %d\n", sumEven);
}

void min_list(lists l)
{
    address p;
    int minimal;

    p=first(l);
    minimal=information(p);

    while(p!=NULL)
    {
        if(information(p)<minimal)
        {
            minimal=information(p);
        }
        p=next(p);
    }

    printf("Minimal value in the list                   : %d\n", minimal);
}

void max_list(lists l)
{
    address p;
    int maximal=0;

    p=first(l);
    while(p!=NULL)
    {
        if(information(p)>maximal)
        {
            maximal=information(p);
        }
        p=next(p);
    }

    printf("Minimal value in the list                   : %d\n", maximal);
}
