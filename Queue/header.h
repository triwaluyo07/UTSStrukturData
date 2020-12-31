#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil 0

typedef int infotype;
typedef int address;

typedef struct{
    infotype *T;
    address Head;
    address Tail;
    int MaxEl;
}Queue;

#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define InfoHead(Q) (Q).T[Head(Q)]
#define InfoTail(Q) (Q).T[Tail(Q)]

boolean IsEmpty(Queue Q);
boolean IsFull(Queue Q);
int NbElmt(Queue Q);
void CreateEmpty(Queue *Q, int maks);
void DeAlokasi(Queue *Q);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);
void PrintQueue(Queue Q);
void intervals(Queue Q);
int halfX(Queue Q, infotype X);
void sumQueue(Queue Q);

#endif // HEADER_H_INCLUDED
