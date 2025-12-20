#include<stdio.h>
#include<stdlib.h>      //malloc and free purpose

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first,PPNODE last,int No)
{

}
void InsertLast(PPNODE first,PPNODE last,int No)
{

}
void InsertAtPos(PPNODE first,PPNODE last,int No,int Pos)
{

}

void DeleteFirst(PPNODE first,PPNODE last)
{

}

void DeleteLast(PPNODE first,PPNODE last)
{
    
}

void DeleteAtPos(PPNODE first,PPNODE last,int Pos)
{
    
}
void Display(PNODE first,PNODE last)
{

}
int Count(PNODE first,PNODE last)
{
    return 0;
}

int main()
{
    
    PNODE head = NULL;
    PNODE tail = NULL;          // @ @ indicate it is newly added line as compare to singly linear linkedlist 
    return 0;
}