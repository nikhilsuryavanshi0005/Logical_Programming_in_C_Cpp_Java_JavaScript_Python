#include<iostream>
using namespace std;

 #pragma pack(1)

class Stacknode
{
    public:
        int data;
        Stacknode* next;

        Stacknode(int No)
        {
            this->data = No;
            this->next = NULL;
        }
};

class Stack
{
    private:
    Stacknode *first;
    int iCount;

    public:
        Stack();
        void Push(int);             //It will be InsertFirst
        int Pop();                  //DeleteFirst
        int Peep();
        void Display();
        int Count();
};

Stack :: Stack()
{
    cout<<"Stack gets Created Successfully.....\n";

    this->first = NULL;
    this->iCount = 0;
}
void Stack ::Push(int No)
{
    Stacknode* newn = NULL;
    newn = new Stacknode(No);

    newn->next = this->first;

    this->first = newn;

    this->iCount++;

}
int Stack:: Pop()
{
    int Value = 0;

    Stacknode* temp = this->first;
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
int Stack :: Peep()
{
  int Value = 0;

    
    if(this->first==NULL)
    {
        cout<<"Stack is Empty.....\n";
        return -1;
    }

    Value = this->first->data;
   

    return Value;
}
void Stack:: Display()
{
    Stacknode* temp = this->first;

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

int Stack :: Count()
{
    return this->iCount;
}



 int main()
 {

    Stack *sobj = new Stack();
    
    sobj->Push(11);
    sobj->Push(21);
    sobj->Push(51);
    sobj->Push(101);

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



    sobj->Push(77);

    sobj->Display();

    cout<<"Number of Elements in Stack is :"<<sobj->Count()<<"\n";
    


    delete sobj;

    return 0;
 }
