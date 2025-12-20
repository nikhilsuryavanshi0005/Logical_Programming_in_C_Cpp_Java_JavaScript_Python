 #include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;          //$ ($ represent extra new line as compare to singly linear linked list)
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn ->next = NULL;
    newn->prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = (*first);
        (*first) ->prev = newn;         //$
        *first = newn;

    }
}
void InsertLast(PPNODE first, int No)
{
    PNODE newn = NULL;

    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn ->next = NULL;
    newn->prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;

        }
        temp->next = newn;
        newn -> prev = temp;
    }
}


void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)-> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)-> next;
        free(temp);
        (*first) -> prev = NULL;      //$
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)-> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp ->next);
        temp->next = NULL;
        

    }
}

void Display(PNODE first)
{
    while( first != NULL)
    {
        printf("|%d|<=>next",first->data);
        first = first ->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first!= NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertAtPos(PPNODE first, int No, int Pos)
{
    int iSize = 0;
    iSize = Count(*first);

    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = 0;

    if((Pos<1) || (Pos >iSize +1))
    {
        printf("Invalid Position\n");
        return;

    }
    
    if(Pos ==1)
    {
        InsertFirst(first,No);
    }
    else if(Pos = iSize +1)
    {
        InsertLast(first,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn ->data = NULL;
        newn->next = NULL;
        newn -> prev = NULL;            //$

        temp = *first;

        for(iCnt = 1; iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
        

    }

}

void DeleteAtPos(PPNODE first,int Pos)
{
    int iSize = 0;
    iSize = Count(*first);

    
    PNODE temp = NULL;
    int iCnt = 0;

    if((Pos<1) || (Pos >iSize))
    {
        printf("Invalid Position\n");
        return;

    }
    
    if(Pos ==1)
    {
        DeleteFirst(first);
    }
    else if(Pos = iSize )
    {
        DeleteLast(first);
    }
    else
    {
        
        temp = *first;

        for(iCnt = 1; iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
        

    }
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,11);
    InsertFirst(&head,21);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes Are :%d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes Are :%d\n",iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes Are :%d\n",iRet);


    
    return 0;
}