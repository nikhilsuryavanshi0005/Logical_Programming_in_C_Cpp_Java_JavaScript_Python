
#include<iostream>

using namespace std;

void DisplayFactors(int iValue)
{    
   static int iCnt = 0;
   
    for(iCnt = 1; iCnt<= iValue/2;iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
    
}

int main()
{
   
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    DisplayFactors(iValue);
   
    

    return 0;
}
