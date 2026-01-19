#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete [] Arr;
        }

};

int main()
{
   //ArrayX aobj(10);

    //Step1 : Allocate the Memory
   ArrayX *aobj = new ArrayX(10);
    
   //Step2 : Use  the Memory

   //Step3 : Deallocate the Memory
   delete aobj;

    return 0;
}