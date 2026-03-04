
#include<iostream>

using namespace std;

int SumDigit(int iValue)
{    
   static int iSum = 0;
   int iDigit = 0;
   
    if(iValue != 0)
    {
        iDigit = iValue % 10;

        iSum = iSum + iDigit;
       
        SumDigit(iValue / 10);
        
    }
    return iSum;
    
}

int main()
{
   
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    iRet = SumDigit(iValue);
   
    cout<<iRet<<"\n";

    return 0;
}
