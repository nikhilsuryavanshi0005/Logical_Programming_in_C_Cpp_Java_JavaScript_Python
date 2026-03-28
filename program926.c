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

int LastnthNode(PNODE first,int iPos)
{
    PNODE  Temp1 = NULL;
    PNODE Temp2 = NULL;
    
    Temp1 = first;
    Temp2 = first;

    int i = 0;

    if(first == NULL)
    {
        printf("Linked list is Empty......\n");
        return -1;
    }

    for(i = 1;i<= iPos;i++)
    {
        if(Temp1 == NULL)
        {
            printf("Invalid Position \n");
            return -1;
        }

        Temp1 = Temp1->next;
    }

    while(Temp1->next != NULL)
    {
        Temp1 = Temp1 -> next;
        Temp2 = Temp2 ->next;
    }

    return(Temp2->data);


}

int main()
{
    PNODE head = NULL;
   
    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);
    InsertLast(&head,201);
   
    
    Display(head);
   

    int iRet = 0;
    



    iRet = LastnthNode(head,5);

    printf("Last Nth Node is %d :",iRet);
    
    
    
    return 0;
}