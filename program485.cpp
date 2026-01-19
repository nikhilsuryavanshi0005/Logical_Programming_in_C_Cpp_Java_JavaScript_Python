
#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>

class node
{
    public :
        T data;
        node<T> *next;

        node(T No)
        {
            this->data = No;
            this->next = NULL;
        }

};

template<class T>
class SinglyLLL
{
    private:                    
        node<T>* first;
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

template<class T>
void SinglyLLL <T>:: InsertFirst(T NO)            
{
node<T>* newn = NULL;
newn = new node<T>(NO);

newn->next =this->first;
this->first = newn;

this->iCount++;
}

template<class T>
void SinglyLLL<T>:: InsertLast(T NO)
{
node<T>* newn = NULL;
node<T>* temp = NULL;

newn = new node<T>(NO);


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
node<T>* temp = NULL;

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
node<T>* temp = NULL;

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
node<T>* temp = NULL;

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
node<T>* newn = new node<T>(NO);

node<T>* temp = NULL;
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
node<T>* target = NULL;

node<T>* temp = NULL;
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

    return 0;
}