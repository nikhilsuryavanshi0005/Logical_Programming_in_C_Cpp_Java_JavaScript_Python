
#include<iostream>

using namespace std;

int CountDigit(int iValue)
{    
   static int iCount = 0;
    if(iValue != 0)
    {
        iCount++;
        
        CountDigit(iValue / 10);
        cout<<iValue<<"\n";
        
    }
    return iCount;
    
}

int main()
{
   
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    iRet = CountDigit(iValue);
   
    // cout<<iRet<<"\n";

    return 0;
}
