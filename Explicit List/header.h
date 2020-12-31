#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

/** LINKED LINEAR LIST - EXPLICIT **/

typedef struct Element_List *address;

typedef struct Element_List
{
    int information;
    address next;
}ElementList;

typedef struct
{
    address first;
}lists;

#define first(l) (l).first
#define next(l) (l)->next
#define information(l) (l)->information

address allocate(int X);
void CreateList(lists *l);
void InsertFirst(lists *l, int X);
void DeleteFirst(lists *l, address *p);
void PrintList(lists l);
int NbElmnt(lists l);
void InsertAfter(lists *l, int X, int prev_X);
void data_mean(lists l);
void sum_Odd(lists l);
void sum_Even(lists l);
void min_list(lists l);
void max_list(lists l);

#endif // HEADER_H_INCLUDED
