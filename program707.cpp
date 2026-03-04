
#include<iostream>

using namespace std;

void DisplayDigit(int iValue)
{    
  
    if(iValue != 0)
    {
        cout<<iValue<<"\n";
        DisplayDigit(iValue / 10);
        cout<<iValue<<"\n";
        
        
    }
    
    
}

int main()
{
   
    int iValue = 0;
    

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    DisplayDigit(iValue);
   
    // cout<<iRet<<"\n";

    return 0;
}
