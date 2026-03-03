#include<iostream>

using namespace std;

int Addition(int iValue)
{    
    int iSum = 0; 
    int i = 1;
    
   while(i <= iValue)
   {
        iSum =  iSum + i;
        i++;   
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
