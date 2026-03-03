#include<iostream>

using namespace std;

int Factorial(int iValue)
{    
    static int iFact = 1; 
    
    
   if( iValue != 0)
   {
        iFact =  iFact * iValue;
        
        Factorial(iValue--);    //Post decrement
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
