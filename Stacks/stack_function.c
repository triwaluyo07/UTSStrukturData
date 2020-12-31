#include "header.h"

void CreateEmpty(Stack *S, int size)
{
    (*S).t=malloc(sizeof(int)*size);
    (*S).Size=size;
    TOP(*S)=0;
}

boolean isEmpty(Stack S)
{
    if(TOP(S)==0)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

boolean isFull(Stack S)
{
    if(TOP(S)==(S).Size)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

void push(Stack *S, int x)
{
    if(!isFull(*S))
    {
        TOP(*S)++;
        infoTop(*S)=x;
    }
    else
    {
        printf("Stack is full!\n");
    }
}

void pop(Stack *S, int a)
{
    if(!isEmpty(*S))
    {
        a=infoTop(*S);
        TOP(*S)--;
    }
    else
    {
        printf("Stack is empty!\n");
    }
}

void printStack(Stack S)
{
    int x;

    for(x=TOP(S); x>0; x--)
    {
        printf("[ %d ] \n", (S).t[x]);
    }
}

void SumStack(Stack S)
{
    int x;
    int sum=0;

    for(x=TOP(S); x>0; x--)
    {
        sum=sum+(S).t[x];
    }

    printf("Jumlah seluruh elemen dalam stack : %d\n", sum);
}

void SumStackNonTop(Stack S)
{
    int x;
    int sum=0;

    for(x=TOP(S)-1; x>0; x--)
    {
        sum=sum+(S).t[x];
    }

    printf("Jumlah seluruh elemen dalam stack : %d\n", sum);
}

void ChangeTop(Stack S)
{
    if(infoTop(S)%2!=0)
    {
        infoTop(S)=infoTop(S)+1;
    }
}
