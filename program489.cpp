////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Generalized DataStructure Library
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
---------------------------------------------------------------------------------------------------------------------
    Type                   Name of Class for node                      Name of class for  Feunctionality
                         
----------------------------------------------------------------------------------------------------------------------
                         
     SinglyLinear           SinglyLLLnode                               SinglyLL            Done
     Singly Circular        SinglyCLLnode                               SinglyCL
     Doubly Linear          DoublyLLLnode                               DoublyLL            Done
     Doubly Circular        DoublyCLLnode                               DoublyCL

--------------------------------------------------------------------------------------------------------------------

*/

#include<iostream>
using namespace std;

/////////////<<<<<<<<<<<<<<<<<<<<<<<<SinglyLinear LinkedList For Generic Approach>>>>>>>>>>>>>>>>>>>>>>>>/////////////

#pragma pack(1)

template<class T>

class SinglyLLLnode
{
    public :
        T data;
        SinglyLLLnode<T> *next;

        SinglyLLLnode(T No)
        {
            this->data = No;
            this->next = NULL;
        }

};

template<class T>
class SinglyLLL
{
    private:                    
        SinglyLLLnode<T>* first;
        int iCount;

    public:
        SinglyLLL();
        void InsertFirst(T);
        void InsertLast(T);
        
        void Display();

        int Count();

        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T,int);
        void DeleteAtPos(int);
        
};

template<class T>
SinglyLLL<T>:: SinglyLLL()
{
cout<<"Object of SInglyLL is created";
this->first = NULL;
this->iCount = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to insert node at first position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL <T>:: InsertFirst(T NO)            
{
SinglyLLLnode<T>* newn = NULL;
newn = new SinglyLLLnode<T>(NO);

newn->next =this->first;
this->first = newn;

this->iCount++;
}

template<class T>
void SinglyLLL<T>:: InsertLast(T NO)
{
SinglyLLLnode<T>* newn = NULL;
SinglyLLLnode<T>* temp = NULL;

newn = new SinglyLLLnode<T>(NO);


if(this->iCount == 0)      
{
this->first = newn;
}
else
{
temp = this->first;

while(temp->next!=NULL)
{
    temp = temp->next;
}
temp->next = newn;
}
this->iCount++;
}

template<class T>
void SinglyLLL<T>:: Display()
{
SinglyLLLnode<T>* temp = NULL;

temp = this->first;
int iCnt = 0;

for(iCnt = 1;iCnt <= this->iCount;iCnt++)
{

cout<<"| "<<temp->data<<"|-> ";
temp = temp->next;
}
cout<<"NULL\n";
}

template<class T>
int  SinglyLLL<T>:: Count()
{
return this->iCount;
}


template<class T>
void SinglyLLL<T>:: DeleteFirst()
{
SinglyLLLnode<T>* temp = NULL;

if(this->first == NULL)
{
return;

}
else if(this->first->next == NULL)   
{
delete this->first;
this->first = NULL;
}
else
{
temp = this->first;
this->first = this->first->next;
delete temp;

}
this->iCount--;
}

template<class T>
void SinglyLLL <T> :: DeleteLast()
{
SinglyLLLnode<T>* temp = NULL;

if(this->first == NULL)
{
return;

}
else if(this->first->next == NULL)  
{
delete this->first;
this->first = NULL;
}
else
{
temp =this->first;

while(temp->next->next!=NULL)
{
    temp = temp->next;
}
delete temp->next;
temp->next = NULL;
}
this->iCount--;

}

template<class T>
void SinglyLLL <T>:: InsertAtPos(T NO,int Pos)
{
SinglyLLLnode<T>* newn = new SinglyLLLnode<T>(NO);

SinglyLLLnode<T>* temp = NULL;
int iCnt = 0;

newn->data = NO;
newn->next = NULL;

if(Pos<1 || Pos > this->iCount+1)
{
cout<<"Invalid Position\n";
return;
}

if(Pos==1)
{
this->InsertFirst(NO);
}
else if(Pos ==iCount+1)
{
this->InsertLast(NO);
}
else
{
temp = this->first;
for(iCnt = 1; iCnt < Pos-1;iCnt++)
{
    temp = temp->next;

}

newn ->next = temp->next;
temp->next = newn;

this->iCount++;

}

}

template<class T>
void  SinglyLLL <T>:: DeleteAtPos(int Pos)
{
SinglyLLLnode<T>* target = NULL;

SinglyLLLnode<T>* temp = NULL;
int iCnt = 0;

if(Pos<1 || Pos > this->iCount)
{
cout<<"Invalid Position\n";
return;
}

if(Pos==1)
{
this->DeleteFirst();
}
else if(Pos ==iCount)
{
this->DeleteLast();
}
else
{
temp = this->first;
for(iCnt = 1; iCnt < Pos-1;iCnt++)
{
    temp = temp->next;

}

target = temp->next;

temp->next = target ->next;
delete target;

this->iCount--;

}
}


///<<<<<<<<<<<<<<<<<<<<<<<<<<DoublyLinearLinked List For Generic Approach >>>>>>>>>>>>>>>>>>>>>>>>>>>>>///////////////

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

//////////////////////////////////////////////////*****End of Library*****///////////////////////////////////////////////
int main()
{




    return 0;
}