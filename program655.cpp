#include<iostream>

using namespace std;

void Display(int iValue)
{     
    
   while(iValue != 0)
   {
        cout<<iValue<<"\n";
        iValue--;
       
   }
}

int main()
{
     
    Display(4);

    return 0;
}
