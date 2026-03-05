#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Display();
        void Accept();
        bool LinearSearch(int iNo);
        bool BiDirectionalSearch(int iNo);

        
        
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
void ArrayX ::  Accept()
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
bool ArrayX :: LinearSearch(int iNo)
{
bool bFlag = false;

int i = 0;

for(i= 0; i<iSize;i++)
{
if(Arr[i]== iNo)
{
    bFlag = true;
    break;
}
return bFlag;
}
}

bool ArrayX ::  BiDirectionalSearch(int iNo)
{
bool bFlag = false;

int iStart = 0;

int iEnd = 0;

for(iStart = 0,iEnd = iSize;iStart <= iEnd;iStart++,iEnd--)

{
if(Arr[iStart]== iNo||Arr[iEnd]==iNo)
{
    bFlag = true;
    break;
}
return bFlag;
}
}

int main()
{
    int iValue =0;
    bool bRet = false;

    cout<<"Enter the Number of Elements:\n";
    cin>>iValue;

   ArrayX aobj(iValue);

   aobj.Accept();
   aobj.Display();

   bRet = aobj.LinearSearch(21);
   
   if(bRet ==true)
   {
        printf("Element is Present\n");
   }
   {
        printf("Element is Present\n");
   }
   
   bRet = aobj.BiDirectionalSearch(21);

   if(bRet ==true)
   {
        printf("Element is Present\n");
   }
   else
   {
        printf("There is no Such Element\n");
   }

    return 0;
}