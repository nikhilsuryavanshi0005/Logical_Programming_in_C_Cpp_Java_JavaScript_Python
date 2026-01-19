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
     Stack                  Stacknode                                   Stack               Done
     Queue                  Queuenode                                   Queue               Done
--------------------------------------------------------------------------------------------------------------------

*/

#include<iostream>
using namespace std;

/////////////<<<<<<<<<<<<<<<<<<<<<<<<SinglyLinear LinkedList For Generic Approach>>>>>>>>>>>>>>>>>>>>>>>>/////////////

#pragma pack(1)

template<class T>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Class SinglyLLLnode (Structure of Node)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to create structure of node
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Class SinglyLLL (Singly Linear Linked List Functions)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to perform various operations on Singly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SinglyLLL (Constructor of Singly Linear Linked List)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to initialize characteristics of Singly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertLast
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to insert node at last position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to display the elements of Singly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Input :         Data of node
//  Output :        Number of nodes
//  Decription :    Used to count the number of nodes in Singly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteLast
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to delete node at last position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertAtPos
//  Input :         Data of node and Position
//  Output :        Nothing
//  Decription :    Used to insert node at given position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteAtPos
//  Input :         Position
//  Output :        Nothing
//  Decription :    Used to delete node at given position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////<<<<<<<<<<<<<<<<<<<<<<<<Doubly Linear Linked List For Generic Approach>>>>>>>>>>>>>>>>>>>>>>>>/////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  TYPE       :  Doubly Linear Linked List
//  Function Name : Class DoublyLLLnode (Structure of Node)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to create structure of node
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Class DoublyLLL (Doubly Linear Linked List Functions)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to perform various operations on Doubly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DoublyLLL (Constructor of Doubly Linear Linked List)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to initialize characteristics of Doubly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class P>
DoublyLLL<P> :: DoublyLLL()
{
    cout<<"LinkedList gets Created\n";

    first = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to insert node at first position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : InsertLast
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to insert node at last position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : InsertAtPos
//  Input :         Data of node and Position
//  Output :        Nothing
//  Decription :    Used to insert node at given position  
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteFirst
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to delete node at first position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteLast
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to delete node at last position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteAtPos
//  Input :         Position
//  Output :        Nothing
//  Decription :    Used to delete node at given position
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to display the elements of Doubly Linear Linked List
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  TYPE       :  Stack
//  Function Name : Class Stacknode (Structure of Node)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to create structure of node
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #pragma pack(1)

template<class T>
class Stacknode
{
    public:
        T data;
        Stacknode<T>* next;

        Stacknode(T No)
        {
            this->data = No;
            this->next = NULL;
        }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Class Stack (Stack Functions)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to perform various operations on Stack
//  Author  :       Nikhil Shankar Suryavanshi. 
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
class Stack
{
    private:
    Stacknode <T> *first;
    int iCount;

    public:
        Stack();
        void Push(T);             
        T Pop();                 
        T Peep();
        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Stack (Constructor of Stack)
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to initialize characteristics of Stack
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template<class T>
Stack <T> :: Stack()
{
    cout<<"Stack gets Created Successfully.....\n";

    this->first = NULL;
    this->iCount = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Push
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to insert node at first position 
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Stack <T>::Push(T No)
{
    Stacknode<T>* newn = NULL;

    newn = new Stacknode<T>(No);

    newn->next = this->first;

    this->first = newn;

    this->iCount++;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pop
//  Input :         Data of node
//  Output :        Value of node
//  Decription :    Used to delete node at first position and return the value
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Stack <T>:: Pop()
{
    T Value = 0;

    Stacknode <T> * temp = this->first;
    if(this->first==NULL)
    {
        cout<<"Stack is Empty.....\n";
        return -1;
    }

    Value = this->first->data;
    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;

}   

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Peep
//  Input :         Data of node
//  Output :        Value of node
//  Decription :    Used to return the value of first node without deleting it
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Stack<T>:: Peep()
{
  T Value = 0;

    
    if(this->first==NULL)
    {
        cout<<"Stack is Empty.....\n";
        return -1;
    }

    Value = this->first->data;
   

    return Value;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Data of node
//  Output :        Nothing
//  Decription :    Used to display the elements of Stack
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void Stack <T>:: Display()
{
    Stacknode<T>* temp = this->first;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return;
    }
    while(temp != NULL)
    {
        cout<<"|\t "<<temp->data<<"\t|\n";
        temp = temp->next;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Input :         Data of node
//  Output :        Number of nodes
//  Decription :    Used to count the number of nodes in Stack
//  Author  :       Nikhil Shankar Suryavanshi.
//  Date    :       06/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>

int Stack<T> :: Count()
{
    return this->iCount;
}


////////////////////<<<<<<<<<<<<<<<<<<<<<<<<Queue Using Generic Approach>>>>>>>>>>>>>>>>>>>>>>>>//////////////////////////////////////////////////



//////////////////////////////////////////////////*****End of Library*****///////////////////////////////////////////////
int main()
{
    SinglyLLL <int> *obj = new SinglyLLL<int>();
    
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);
    obj->Display();


    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    obj->DeleteFirst();

    obj->Display();


    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    obj->DeleteLast();

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    obj->InsertAtPos(105,4);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    obj->DeleteAtPos(4);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of Nodes are :"<<iRet<<"\n";

    delete obj;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Stack <char> *sobj = new Stack<char>();
    
    sobj->Push('a');
    sobj->Push('b');
    sobj->Push('c');
    sobj->Push('d');

    sobj->Display();

    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";

    cout<<"Return Value of Peep is :"<<sobj->Peep()<<"\n";

    sobj->Display();

    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";

    cout<<"Poped Element is :"<<sobj->Pop()<<"\n";

    sobj->Display();


    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";

    cout<<"Poped Element is :"<<sobj->Pop()<<"\n";

    sobj->Display();

    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";



    sobj->Push('e');

    sobj->Display();

    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";
    


    delete sobj;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    return 0;
}