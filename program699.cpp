
#include<iostream>

using namespace std;

void  Display(int iValue)
{    
   
    if(iValue != 0)
    {
          
        cout<<iValue<<"\t";
        Display(iValue - 1);    
        cout<<iValue<<"\t";
    }
    
}

int main()
{
   
    int iValue = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    
    Display(iValue);
    cout<<"\n";

    return 0;
}
