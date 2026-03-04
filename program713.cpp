
#include<iostream>

using namespace std;

int SumFactors(int iValue)
{    
   static int iCnt = 1;
   static int iSum = 0;
  
   
    if(iCnt<= iValue/2)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;

        }
         iCnt++;
        SumFactors(iValue);
    }
    return iSum;
    
}

int main()
{
   
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    iRet = SumFactors(iValue);
   
    
    cout<<iRet<<"\n";
    return 0;
}
