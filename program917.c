#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;



void InsertLast(PPNODE first , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn ->data = No;
    newn ->next = NULL;
    PNODE temp = NULL;
    
    if((*first) == NULL)      //LinkedList is Empty
    {
        (*first) = newn;
    }
    else                    //LinkedList  contains atleast 1 node
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}
// Time Complexity : N + N/2
int MiddleElement(PNODE first)
{
    int iCount = 0;
    PNODE temp = NULL;
    int middle = 0;
    
    temp = first;

    while(first != 0)
    {
        iCount++;

        first = first -> next;
    }

    middle = (iCount/2) + 1;

    first = temp;

    for(int i = 1;i < middle;i++)       // N/2
    {
        first = first -> next;
    }
    
    return (first->data);
}

int MiddleElementX(PNODE first)     //Tortuize Algorithm
{
    PNODE fast = first;
    PNODE Slow = first;

    while((fast != NULL)&&(fast->next != NULL))
    {
        fast = fast->next->next;
        Slow = Slow ->next;
    }




}


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL \n");
}


int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,111);

    Display(head);
    int iRet = 0;

    iRet = MiddleElement(head);

    printf(" Middle element is  : %d\n ",iRet);
    
    return 0;
}