#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

//TimeComplexity: N
//Space Complexity : 1

// Linkedlist Reversing Algorithm
void Reverse(PPNODE first)
{
   PNODE previous = NULL;
   PNODE current = NULL;
   PNODE next = NULL;

   if(*first == NULL)
   {
        return;
   }

   current = *first;

   while(current != NULL)
   {
        next = current->next;
        current ->next = previous;

        previous = current;
        current = next;
   }
   *first = previous;
}

int main()
{
    PNODE head = NULL;
   

   

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    

    Display(head);
    Reverse(&head);
    printf("Linkedlist after Revervse :\n");
    Display(head);
    
    
    
    return 0;
}