#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        SinglyLL()
        {
            cout<<"Object of SInglyLL is created";
            first = NULL;
            iCount = 0;
        }
    
        void InsertFirst(int NO)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = NO;
            newn ->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next =first;
                first = newn;
            }
            iCount++;
        }
        void InsertLast(int NO)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = NO;
            newn ->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {

            }
            iCount++;
        }
        void InsertAtPos(int NO,int Pos)
        {

        }
        void Display()
        {
            PNODE temp = NULL;

            temp = first;

            while(temp!= NULL)
            {
                temp = temp->next;
                cout<<"| "<<temp->data<<"|-> ";
            }
            cout<<"NULL\n";
        }
        int Count()
        {
            return iCount;
        }
        void DeleteFirst()
        {

        }
        void DeleteLast()
        {

        }
        void DeleteAtPos(int Pos)
        {

        }
};

int main()
{

    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();


    iRet = obj.Count();

    return 0;
}
