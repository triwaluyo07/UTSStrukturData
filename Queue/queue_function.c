#include "header.h"

boolean IsEmpty(Queue Q)
{
    return ((Head(Q)==Nil) && (Tail(Q)==Nil));
}

boolean IsFull(Queue Q)
{
    return ((Tail(Q)==Q.MaxEl) && (Head(Q)==1));
}

int NbElmt(Queue Q)
{
    return Tail(Q);
}

void CreateEmpty(Queue *Q, int maks)
{
    (*Q).T=malloc((maks+1) * sizeof(int));
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
    (*Q).MaxEl=maks;
}

void Add(Queue *Q, infotype X)
{
    if (IsFull(*Q))
    {
        printf("Queue is full.\n");
        getch();
    }
    else if (IsEmpty(*Q))
        {
            Head(*Q)++;
            Tail(*Q)++;
            InfoTail(*Q)=X;
        }
    else
        {
            Tail(*Q)++;
            InfoTail(*Q)=X;
        }
}

void Del(Queue *Q, infotype *X)
{
    if (IsEmpty(*Q))
    {
        printf("Queue is empty.\n");
        getch();
    }
    else if(NbElmt(*Q)==1)
        {
            *X=InfoHead(*Q);
            Head(*Q)--;
            Tail(*Q)--;
        }
    else
        {
            int i;
            InfoHead(*Q)=*X;
            for(i=1; i<Tail(*Q); i++)
                {
                    (*Q).T[i]=(*Q).T[i+1];
                }
            Tail(*Q)--;
        }
}

void PrintQueue(Queue Q)
{
    while(Head(Q)<=Tail(Q))
    {
        printf("[ %d ] ", InfoHead(Q));
        Head(Q)++;
    }
}

void intervals(Queue Q)
{
    int sumEven=0, sumOdd=0;

    while(Head(Q)<=Tail(Q))
    {
        if(InfoHead(Q)%2==0)
        {
            sumEven=sumEven+InfoHead(Q);
            Head(Q)++;
        }
        else
        {
            sumOdd=sumOdd+InfoHead(Q);
            Head(Q)++;
        }
    }

    int Odd, Even;

    Odd=sumOdd;
    Even=sumEven;

    if(Odd>Even)
        printf("Intervals is %d", Odd-Even);
    else
        printf("Intervals is %d", Even-Odd);
}

int halfX(Queue Q, infotype X)
{
    int res=0;
    bool found=false;

    res=X/2;

    while(Head(Q)<=Tail(Q))
    {
        if(res==InfoHead(Q))
        {
            found=true;
        }
        Head(Q)++;
    }

    if(found==true)
    {
        return (res);
    }
    else
    {
        return (0);
    }
}

void sumQueue(Queue Q)
{
    int sum=0, x;

    for(x=1; x<=Q.MaxEl; x++)
    {
        if(x!=1 && x!=Q.MaxEl)
        {
            sum=sum+(Q).T[x];
            Head(Q)++;
        }
        Head(Q)++;
    }

    printf("\nSum of all values in Queue (except Head & Tail) is %d.\n", sum);
}
