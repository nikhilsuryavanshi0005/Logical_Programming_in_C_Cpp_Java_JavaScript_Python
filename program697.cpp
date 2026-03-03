#include<iostream>

using namespace std;

void  Display(int iValue)
{    
   
    if(iValue != 0)
    {
          
        Display(iValue - 1);    //head recursion
        cout<<iValue<<"\t";
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
