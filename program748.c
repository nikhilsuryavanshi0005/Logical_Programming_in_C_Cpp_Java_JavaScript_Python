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

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->Lchild);
        Count(first->Rchild);
    }

    return iCount;
}

int CountParentNodes(PNODE first)
{
    static int iCount = 0;

    if(first!= NULL)
    {
    
        if((first->Lchild ) != NULL || (first->Rchild )!= NULL)
        {
            iCount++;
        }
        
        CountParentNodes(first->Lchild);
        CountParentNodes(first->Rchild);
    }

    return iCount;
}

int CountChildNodes(PNODE first)
{
    static int iCount = 0;

    if(first!= NULL)
    {
    
        if((first->Lchild ) == NULL || (first->Rchild )== NULL)
        {
            iCount++;
        }
        
        CountChildNodes(first->Lchild);
        CountChildNodes(first->Rchild);
    }

    return iCount;
}


int main()
{
    PNODE head = NULL;
    bool bRet = false;
    int iRet = 0;
    int pRet = 0;
    int cRet = 0;

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

    iRet = Count(head);

    printf("Number of Elements are %d\n",iRet);

    pRet = CountParentNodes(head);
    printf("Number of Parent Nodes are %d\n",pRet);

    cRet = CountChildNodes(head);
    printf("Number of Child Nodes are %d\n",cRet);
   
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