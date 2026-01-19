///<<<<<<<<<<<<<<<<<<< Final Code For DoublyLinearLinked List For Generic Approach;
#include<iostream>
using namespace std;

#pragma pack(1)

template<class P>
class DoublyLLLnode
{
    public:
        P data;
        DoublyLLLnode *next;
       DoublyLLLnode *prev;

        DoublyLLLnode(P No)
        {
            this->data = No;
            this->next = NULL;
            this->prev = NULL;
        }

};

template<class P>
class DoublyLLL
{
    private:
        DoublyLLLnode <P> *first;
        int iCount;

     public:
        DoublyLLL();

        
        void InsertFirst(P);
        void InsertLast(P);
        void InsertAtPos(P,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
    
};

template<class P>
DoublyLLL<P> :: DoublyLLL()
{
    cout<<"LinkedList gets Created\n";

    first = NULL;
    iCount = 0;
}

template<class P>
void DoublyLLL<P> ::  InsertFirst(P No)
{
    DoublyLLLnode <P>  * newn = NULL;
    newn = new DoublyLLLnode <P>(No);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}

template<class P>
void  DoublyLLL <P> :: InsertLast(P No)
 {
    DoublyLLLnode <P>  * newn = NULL;
    newn = new DoublyLLLnode <P> (No);

    DoublyLLLnode <P>  * temp = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
       temp = this->first;

       while(temp->next!= NULL)
       {
        temp = temp->next;
       }
       temp->next = newn;
       newn->prev = temp;

    }
    this->iCount++;
 }

template<class P>
int DoublyLLL <P> :: Count()
{
    return this->iCount;
}

template<class P>
void  DoublyLLL<P> :: InsertAtPos(P No,int Pos)
{  
    DoublyLLLnode <P> * newn = NULL;
    newn = new DoublyLLLnode<P> (No);
    
    DoublyLLLnode <P>  * temp = NULL;
    
    if(Pos<1 || Pos>this->iCount+1)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos ==1)
    {
        this->InsertFirst(No);
    }
    else if(Pos == iCount+1)
    {
        this->InsertLast(No);
    }
    else
    {

        temp = this->first;

        int iCnt = 0;

        for(iCnt = 0;iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
       
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;

    }
    

}

template<class P>
void DoublyLLL <P> :: DeleteFirst()
{
    DoublyLLLnode <P>  * temp = NULL;
    if(this->first == NULL)                     //LL is Empty
    {
        return;
    }
    else if(this->first->next == NULL)          //LL contaons One Node
    {
        delete this->first;

        this->first = NULL;
    }
    else                                        // LL contain more than One Node
    {
        

        this->first = this->first->next;

        delete this->first->prev;
        
        this->first->prev = NULL;

    }
    this->iCount--;
}

template<class P>
void DoublyLLL <P> :: DeleteLast()
{
    DoublyLLLnode <P>  * temp = NULL;

    if(this->first == NULL)                     //LL is Empty
    {
        return;
    }
    else if(this->first->next == NULL)          //LL contaons One Node
    {
        delete this->first;

        this->first = NULL;
    }
    else                                        // LL contain more than One Node
    {
        temp = this->first;
        
        while(temp->next->next!= NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

    }
    this->iCount--;
}

template<class P>
void DoublyLLL <P> ::DeleteAtPos(int Pos)
{
    DoublyLLLnode <P> * temp = NULL;

    
    if(Pos < 1 || Pos > this->iCount)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos ==1)
    {
        this->DeleteFirst();
    }
    else if(Pos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        int iCnt = 0;

        for(iCnt = 0;iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
       temp->next = temp->next->next;

       delete temp->next->prev;

       temp->next->prev = temp;


        this->iCount--;

    }
}

template<class P>
void DoublyLLL <P>::Display()
{
    DoublyLLLnode <P> * temp = NULL;

    temp = this->first;

    cout<<"\nNULL<=>";
    while(temp!= NULL)
    {
        cout<<"| "<<temp->data<<"|<=>";
        temp = temp->next;

    }
    cout<<"NULL\n";
}

    
int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->InsertFirst('a');
    dobj->InsertFirst('b');
    dobj->InsertFirst('c');

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";

    dobj->InsertLast('d');
    dobj->InsertLast('f');
    dobj->InsertLast('g');

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteFirst();

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteLast();

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";

    dobj->InsertAtPos('k',3);

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteAtPos(3);

    dobj->Display();

    cout<<"Number of elements are :"<<dobj->Count()<<"\n";




    return 0;
}