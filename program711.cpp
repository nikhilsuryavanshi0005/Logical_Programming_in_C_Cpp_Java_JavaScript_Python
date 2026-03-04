
#include<iostream>

using namespace std;

void DisplayFactors(int iValue)
{    
   static int iCnt = 0;
   iCnt = 1; 
   
    while(iCnt<= iValue/2)
    {
        if(iValue % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
         iCnt++;
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
