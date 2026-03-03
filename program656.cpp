#include<iostream>

using namespace std;

void Display(int iValue)
{     
    

   if(iValue != 0)
   {
        cout<<iValue<<"\n";
        iValue--;
        Display(iValue);
   }
}

int main()
{
     
    Display(4);

    return 0;
}
