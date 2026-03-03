#include<iostream>

using namespace std;

void Display(int iValue)
{ 
    static int i = 1;   

    if(i<= iValue)
    {
        cout<<i<<"\n";
        i++;
        Display(iValue);
    }
         
    
}
int main()
{
     
    Display(6);

    return 0;
}
