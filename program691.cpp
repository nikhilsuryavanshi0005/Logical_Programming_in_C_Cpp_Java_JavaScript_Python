#include<iostream>

using namespace std;

void  Display(int iValue)
{    
    int iCnt = iValue;


    while(iCnt != 0)
    {
        cout<<iCnt<<"\t";
        iCnt--;
    }
    cout<<"\n";
}

int main()
{
   
    int iValue = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    Display(iValue);

    return 0;
}
