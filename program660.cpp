#include<iostream>

using namespace std;

int Addition(int iValue)
{    
    static int iSum = 0; 
    
    
   if( iValue != 0)
   {
        iSum =  iSum + iValue;
        iValue--;
        Addition(iValue);  
   }
   return iSum;
}

int main()
{
    int iRet = 0;
    iRet = Addition(4);

    cout<<iRet<<"\n";

    return 0;
}
