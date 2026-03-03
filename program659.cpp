#include<iostream>

using namespace std;

int Addition(int iValue)
{    
     int iSum = 0; 
    
    
   while( iValue != 0)
   {
        iSum =  iSum + iValue;
        iValue--;
           
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
