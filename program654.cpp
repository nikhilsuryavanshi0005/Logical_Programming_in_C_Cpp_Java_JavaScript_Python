#include<iostream>

using namespace std;

void Display(int iValue)
{     
    int i = iValue;

    while(i !=0)
    {
        cout<<i<<"\n";
        i--;
    }
}

int main()
{
     
    Display(4);

    return 0;
}
