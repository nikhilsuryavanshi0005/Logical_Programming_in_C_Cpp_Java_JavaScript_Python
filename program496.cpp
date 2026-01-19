//////
//////<<<<<<<<<<<<<Queue Final>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

 #pragma pack(1)

class Queuenode
{
    public:
        int data;
        Queuenode* next;

        Queuenode(int No)
        {
            this->data = No;
            this->next = NULL;
        }
};

class Queue
{
    private:
    Queuenode *first;
    int iCount;

    public:
        Queue();
        void Enqueue(int);             // InsertLast
        int Dequeue();                  //DeleteFirst
        void Display();
        int Count();
};

Queue :: Queue()
{
    cout<<"Queue gets Created Successfully.....\n";

    this->first = NULL;
    this->iCount = 0;
}
void Queue :: Enqueue(int No)
{
    Queuenode* newn = NULL;
    newn = new Queuenode(No);

    Queuenode* temp = this->first;

    if(this->first==NULL)
    {
        this->first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    this->iCount++;

}
int Queue :: Dequeue()
{
    int Value = 0;

    Queuenode* temp = this->first;

    if(this->first==NULL)
    {
        cout<<"Queue is Empty.....\n";
        return -1;
    }

    Value = this->first->data;
    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;

}                 

void Queue :: Display()
{
    Queuenode* temp = this->first;

    if(this->first == NULL)
    {
        cout<<"Queue is empty\n";
        return;
    }
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | - ";
        temp = temp->next;
    }
    cout<<"\n";
}

int Queue :: Count()
{
    return this->iCount;
}

 int main()
 {

    Queue *qobj = new Queue();
    
    qobj->Enqueue(11);
    qobj->Enqueue(21);
    qobj->Enqueue(51);
    qobj->Enqueue(101);

    qobj->Display();

    cout<<"Number of Elements in Queue is :"<<qobj->Count()<<"\n";

    cout<<"Dequeued Element is :"<<qobj->Dequeue()<<"\n";

    qobj->Display();

    cout<<"Number of Elements in Queue is :"<<qobj->Count()<<"\n";


    qobj->Enqueue(77);

    qobj->Display();

    cout<<"Number of Elements in Queue is :"<<qobj->Count()<<"\n";

    cout<<"Dequeued Element is :"<<qobj->Dequeue()<<"\n";

    qobj->Display();

    cout<<"Number of Elements in Queue is :"<<qobj->Count()<<"\n";

    

    delete qobj;

    return 0;
 }
