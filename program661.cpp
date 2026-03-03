#include<iostream>

using namespace std;

int Factorial(int iValue)
{    
    int iFact = 1; 
    
    
   while( iValue != 0)
   {
        iFact =  iFact * iValue;
        iValue--;
         
   }
   return iFact;
}

int main()
{
    int iRet = 0;
    iRet = Factorial(4);

    cout<<iRet<<"\n";

    return 0;
}
