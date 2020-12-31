#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#define max 255
#define true 1
#define false 0
#define boolean unsigned char
#define maxi 10

/** STACKS **/

typedef struct
{
    int *t;
    int Size;
    int TOP;
}Stack;

#define TOP(S) (S).TOP   ///
#define infoTop(S) (S).t[TOP(S)]   ///

void CreateEmpty(Stack *S, int ukuran);
boolean isEmpty(Stack S);
boolean isFull(Stack S);
void push(Stack *S, int a);
void pop(Stack *S, int a);
void printStack(Stack S);

#endif // HEADER_H_INCLUDED
