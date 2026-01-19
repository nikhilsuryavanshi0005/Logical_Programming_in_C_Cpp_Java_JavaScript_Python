#include<iostream>

using namespace std;


class ArrayX
{
    public:
        int *Arr; 
        int iSize;

        ArrayX(int no);

        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
        int Maximum();
        int Count(int);
};


ArrayX :: ArrayX(int no)
{
cout<<"Inside Constructor\n";
iSize = no;
Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
cout<<"Inside Destructor\n";
delete [] Arr;
}
void ArrayX :: Accept()
{
int iCnt = 0;
cout<<"Enter the Elements:\n";

for(iCnt = 0; iCnt<iSize;iCnt++)
{
    cin>>Arr[iCnt];
}
}
void ArrayX :: Display()
{
int iCnt = 0;
cout<<"Elements of the Array are :\n";

for(iCnt=0; iCnt<iSize;iCnt++)
{
    cout<<Arr[iCnt]<<"\t";

}
cout<<"\n";
}
int  ArrayX :: Addition()
{
int iSum =0;

int iCnt = 0;

for(iCnt = 0;iCnt<iSize;iCnt++)
{
    iSum = iSum + Arr[iCnt];
}
return iSum;
}

int ArrayX :: Maximum()
{
    int iMax = 0;
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

int ArrayX :: Count(int iNo)
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
   ArrayX *aobj = new ArrayX(iValue);
    
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