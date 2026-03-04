#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node* Lchild;
    struct node* Rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first,int No)
{
    PNODE newn = NULL;

    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->Lchild = NULL;
    newn->Rchild = NULL;

    if(*first == NULL)          //If tree is empty
    {
        *first = newn;
    }
    else                            /// if tree contains atleast one node
    {
        temp = *first;

        while(1)                //if we have used 1 in while loop then we have to use break in every if case;
        {
            if(No > temp->data)     //If element is Greater 
            {
                if(temp->Rchild == NULL)
                {
                    temp->Rchild = newn;
                    break;
                }

                temp = temp->Rchild;
            }
            else if(No < temp->data)               //If element is Greater 
            {
                if(temp->Lchild == NULL)
                {
                    temp->Lchild = newn;
                    break;
                }
                temp = temp->Lchild;
            }
            else if(No == temp->data)               //If element is identical
            {
                printf("Unable to insert as the element is already present\n");
                free(newn);
                break;
            }
        }
    }
}

void InorderDisplay(PNODE first)        // L     D       R
{
    if(first != NULL)
    {
        InorderDisplay(first->Lchild);
        printf("%d\n",first->data);
        InorderDisplay(first->Rchild);
    }
}

void PreorderDisplay(PNODE first)        //      D       L      R
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        PreorderDisplay(first->Lchild);
        PreorderDisplay(first->Rchild);
    }
}

void PostorderDisplay(PNODE first)        // L            R         D
{
    if(first != NULL)
    {
       
        PostorderDisplay(first->Lchild);
        PostorderDisplay(first->Rchild);
        printf("%d\n",first->data);
    }
}

bool Search(PNODE first,int No)
{
    bool bFlag = false;
    while(first != NULL)
    {
        if( No >first->data)
        {
            first = first->Rchild;
        }
        else if(No < first->data)
        {
            first = first->Lchild;
        }
        else if(No == first->data)
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
    bool bRet = false;

    Insert(&head,21);
    Insert(&head,11);
    Insert(&head,51);
    Insert(&head,67);
    Insert(&head,40);
    Insert(&head,10);
    Insert(&head,13);
    Insert(&head,38);

    
    printf("Inorder Traversal\n");
    InorderDisplay(head);

    bRet = Search(head,47);

    if(bRet == true)
    {
        printf("Element is Present \n");
    }
    else
    {
        printf("Element is Not Present \n");
    }
    

    return 0;
}