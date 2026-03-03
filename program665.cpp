#include<iostream>

using namespace std;

int iFact = 1;

void Factorial(int iValue)
{    
    
   if( iValue != 0)
   {
        iFact =  iFact * iValue;
        
        Factorial(--iValue);    //Pree decrement
   }
   
}

int main()
{
    int iRet = 0;
    Factorial(4);

    cout<<iFact<<"\n";

    return 0;
}
