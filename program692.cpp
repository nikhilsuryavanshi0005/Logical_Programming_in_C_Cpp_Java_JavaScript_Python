#include<iostream>

using namespace std;

void  Display(int iValue)
{    
   


    while(iValue != 0)
    {
        cout<<iValue<<"\t";
        iValue--;
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
