///<<<<<<<<<<<<<<<<<<< Final Code Queue For Generic Approach>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//////
#include<iostream>

using namespace std;

 #pragma pack(1)

 template<class T>

class Queuenode
{
    public:
        int data;
        Queuenode<T>* next;

        Queuenode(T No)
        {
            this->data = No;
            this->next = NULL;
           
        }
};

template<class T>

class Queue
{
    private:
    Queuenode<T> *first;
    T iCount;
    Queuenode<T> *last;

    public:
        Queue();
        void Enqueue(T);             
        T Dequeue();                  
        void Display();
        int Count();
};

template<class T>
Queue<T> :: Queue()
{
    cout<<"Queue gets Created Successfully.....\n";

    this->first = NULL;
    this->iCount = 0;
    this->last = NULL;
}

template<class T>
void Queue<T> :: Enqueue(T No)
{
    Queuenode<T>* newn = NULL;
    newn = new Queuenode<T>(No);
    

    if(this->first==NULL && this->last == NULL)
    {
        this->first = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;
    }

    this->iCount++;

}

template<class T>
T Queue <T> :: Dequeue()
{
    T Value = 0;

    Queuenode* temp = this->first;

    if(this->first==NULL && this->last==NULL)
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

template<class T>
void Queue <T> :: Display()
{
    Queuenode* temp = this->first;

    if(this->first == NULL && this->last)
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

template<class T>
int Queue <T> :: Count()
{
    return this->iCount;
}

 int main()
 {

    Queue<int> *qobj = new Queue<int>();
    
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
