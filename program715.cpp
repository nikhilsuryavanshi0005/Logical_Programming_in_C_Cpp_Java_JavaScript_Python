
#include<iostream>

using namespace std;

bool CheckPerfect(int iValue)
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
        CheckPerfect(iValue);
    }
    
    return(iSum == iValue);
    
    
}

int main()
{
   
    int iValue = 0;
    bool iRet = false;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    iRet = CheckPerfect(iValue);
   
    
   if(iRet == true)
   {
    cout<<"It is perfect Number \n";
   }
   else
   {
    cout<<"It not perfect Number \n";
   }
    return 0;
}
