#include<iostream>

using namespace std;

void  Display(int iValue)
{    
    static int iCnt = 1;


    if(iCnt <= iValue)
    {
        cout<<iCnt<<"\t";
        iCnt++;
        Display(iValue);
    }
    else
    {
        cout<<"\n";
    }
}

int main()
{
   
    int iValue = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    Display(iValue);

    return 0;
}
