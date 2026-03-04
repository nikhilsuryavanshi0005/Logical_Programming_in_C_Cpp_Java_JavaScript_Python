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

void DisplayI(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
       
    }
    printf("NULL \n");
}
void DisplayR(PNODE first)
{
    if(first != NULL)
    {
         DisplayR(first->next);
        printf("| %d |->",first->data);
         
    }
   
    
}

int CountR(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        first = first->next;
        CountR(first);
    }
    return iCount;
   
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)                   // Case 1
    {
        return;
    }
    else if( (*first) -> next == NULL)      //Case 2
    {
        free(*first);
        *first = NULL;
    }
    else                    //Case 3
    {
        temp = *first;
        *first = (*first) -> next; 
        free(temp);
       
    }

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    DisplayR(head);
    printf("\n");

    iRet = CountR(head);

    printf("%d",iRet);

   

    return 0;
}