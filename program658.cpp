#include<iostream>

using namespace std;

int Addition(int iValue)
{    
    static int iSum = 0; 
    static int i = 1;
    
   if( i <= iValue)
   {
        iSum =  iSum + i;
        i++;
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
