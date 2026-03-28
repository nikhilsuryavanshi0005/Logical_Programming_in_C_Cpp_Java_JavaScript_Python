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
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);


    Display(head);
    
    temp1 = head;
    temp2 = head;

    temp1 = temp1 -> next -> next -> next;

    temp2 = temp2->next->next->next->next->next->next;

    temp2->next = temp1;    //to create the loop

    Display(head);

   
    
    return 0;
}