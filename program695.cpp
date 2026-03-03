#include<iostream>

using namespace std;

void  Display(int iValue)
{    
   
    if(iValue != 0)
    {
        cout<<iValue<<"\t";
        
        Display(--iValue);
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
