#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize;
        bool Sorted;

        ArrayX(int no);
        ~ArrayX();

        void Display();
        void Accept();

        bool CheckSorted();

        void BubbleSort();
        void SelectionSort(int arr[],int n);

       
        
        
};

ArrayX :: ArrayX(int no)
{
cout<<"Inside Constructor\n";
iSize = no;
Arr = new int[iSize];
Sorted = true;
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}
void ArrayX ::  Accept()
{
    int iCnt = 0;
    cout<<"Enter the Elements:\n";

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt -1] <Arr[iCnt])
        {
            Sorted = false;
        }
    }
    // Sorted = CheckSorted();
}
void ArrayX :: Display()
{
int iCnt = 0;
cout<<"Elements of the Array are :\n";

for(iCnt=0; iCnt<iSize;iCnt++)
{
cout<<Arr[iCnt]<<"\t";

}
cout<<"\n";
}

// 0    1   2   3   4   5   6   7   8   9  
// 12   14  17  24  28  

bool ArrayX :: CheckSorted()
{
    int i = 0;
    bool bFlag = true;

    for(i = 0;i>iSize-1;i++)
    {
        if(Arr[i] > Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

//   Input Data : 21    15   18     16     11
void ArrayX :: BubbleSort()
{
    int i = 0;
    int j = 0;
    int temp =0;

    if(Sorted == true)          //Important Filter
    {
        return;
    }

    for(i = 0;i<iSize-1;i++)        //Outer Loop
    {
        for(j =0;j<iSize - 1 -1;j++)        //Inner loop
        {
            if(Arr[j]>Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        cout<<"\n Data After Pass : "<<i +1<<"\n";
        Display();

    }
    Sorted = true;
}



int main()
{
    int iValue =0;
    bool bRet = false;

    cout<<"Enter the Number of Elements:\n";
    cin>>iValue;

   ArrayX aobj(iValue);

   aobj.Accept();

   cout<<"Data Before Sorting\n";

   aobj.Display();

   aobj.BubbleSort();

   cout<<"Data After Sorting\n";
   
   aobj.Display();

   



    
    return 0;
}