
#include<iostream>

using namespace std;

int CountDigit(int iValue)
{    
   int iCount = 0;
    while(iValue != 0)
    {
        iCount++;
       iValue = iValue / 10;

        
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
   
    cout<<iRet<<"\n";

    return 0;
}
