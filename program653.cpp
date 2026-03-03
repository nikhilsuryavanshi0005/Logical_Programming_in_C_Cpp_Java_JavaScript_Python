#include<iostream>

using namespace std;

void Display(int iValue)
{ 
    static int i = 1;   

    if(i<= iValue)
    {
        
        i++;
        Display(iValue);
        cout<<i<<"\n";
    }
         
    
}
int main()
{
     
    Display(3);

    return 0;
}
