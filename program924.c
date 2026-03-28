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

//TimeComplexity: 3N
//Space Complexity : N

void Reverse(PPNODE first)
{
    int *Arr = NULL;
    int iCount = 0;
    PNODE temp = *first;

    while(temp!= NULL)//O(N)order of N
    {
        temp = temp -> next;
        iCount++;
    }

    //SpaceComplexity : N
    Arr = (int*)malloc(sizeof(int)* iCount);

    temp = *first;
    int i = 0;

    while(temp != NULL) //Order(N)
    {
        Arr[i] = temp->data;
        i++;
        temp = temp ->next;
    }
    temp = *first;

    iCount--;
    while(temp != NULL)         //Order of N
    {
        temp->data =Arr[iCount];
        iCount--;
        temp = temp->next;
    }
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