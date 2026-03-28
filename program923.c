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

bool CheckLoop(PNODE first)
{
    PNODE fast = first;
    PNODE slow = first;
    bool bFlag = false;

    while((fast != NULL)&& (fast ->next != NULL))
    {
        fast = fast ->next->next;
        if(fast == slow)
        {
            bFlag = true;
            break;
        }
        slow = slow ->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    PNODE head = NULL;
   

    int Pos1 = 4;
    int i = 0;
    bool bRet = false;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);


    

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Loop Exits\n");
    }
    else
    {
        printf("There is No Loop \n");
    }

   
   

   
    
    return 0;
}