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
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements:\n";

            for(iCnt = 0; iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Elements of the Array are :\n";

            for(iCnt=0; iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";

            }
            cout<<"\n";
        }
        
};

int main()
{
    int iValue =0;

    cout<<"Enter the Number of Elements:\n";
    cin>>iValue;

   //ArrayX aobj(10);

    //Step1 : Allocate the Memory
   ArrayX *aobj = new ArrayX(iValue);
    
   //Step2 : Use  the Memory

   aobj->Accept();
   aobj->Display();

   //Step3 : Deallocate the Memory
   delete aobj;

    return 0;
}