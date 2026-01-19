#include<iostream>

using namespace std;

template<class T>


class ArrayX
{
    public:
        T *Arr; 
        int iSize;

        ArrayX(int no);

        ~ArrayX();
        void Accept();
        void Display();
        T Addition();
        T Maximum();
        int Count(T);
};

template<class T>

ArrayX <T> :: ArrayX(int no)
{
cout<<"Inside Constructor\n";
iSize = no;
Arr = new T[iSize];
}

template<class T>
ArrayX <T>:: ~ArrayX()
{
cout<<"Inside Destructor\n";
delete [] Arr;
}

template<class T>
void ArrayX <T> :: Accept()
{
int iCnt = 0;
cout<<"Enter the Elements:\n";

for(iCnt = 0; iCnt<iSize;iCnt++)
{
    cin>>Arr[iCnt];
}
}

template<class T>
void ArrayX<T> :: Display()
{
int iCnt = 0;
cout<<"Elements of the Array are :\n";

for(iCnt=0; iCnt<iSize;iCnt++)
{
    cout<<Arr[iCnt]<<"\t";

}
cout<<"\n";
}

template<class T>
T  ArrayX <T> :: Addition()
{
<T> iSum = Arr[0] - Arr[0];     // iSum = 0; this meaning

int iCnt = 0;

for(iCnt = 0;iCnt<iSize;iCnt++)
{
    iSum = iSum + Arr[iCnt];
}
return iSum;
}

template<class T>
T ArrayX <T> :: Maximum()
{
    T iMax = 0;
    int iCnt = 0;

    for(iCnt =0; iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

template<class T>
int ArrayX <T> :: Count(T iNo)
{
    int iCount = 0;

    int iCnt = 0;

    for(iCnt =0; iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue =0;

    cout<<"Enter the Number of Elements:\n";
    cin>>iValue;


   //ArrayX aobj(10);

    //Step1 : Allocate the Memory
   ArrayX <int> *aobj = new ArrayX <int>(iValue);
    
   //Step2 : Use  the Memory

   aobj->Accept();
   aobj->Display();
   cout<<"Summation of all Elements:"<<aobj->Addition()<<"\n";

   
   cout<<"Maximum Element is :"<<aobj->Maximum()<<"\n";

   cout<<"Frequency of Number is :"<<aobj->Count(11)<<"\n";
   //Step3 : Deallocate the Memory
   delete aobj;

    return 0;
}