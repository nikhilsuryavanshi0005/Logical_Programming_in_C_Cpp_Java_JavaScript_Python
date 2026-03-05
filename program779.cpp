
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
        void Accept();
        void Display();
        

        bool CheckSorted();

        void BubbleSort();
        void BubbleSortEfficient();
        void SelectionSort(int arr[],int n);
        void InsertionSort(int arr[],int n);
        
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
    cin>>Arr[iCnt];

    for(iCnt = 1; iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt -1] >Arr[iCnt])
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

for(iCnt = 0; iCnt < iSize; iCnt++)
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

    for(i = 0; i < iSize-1;i++)
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
    int pass = 0;
    int Time = 0;


    if(Sorted == true)          //Important Filter
    {
        return;
    }
     Time = 1;

    for(i = 0,pass = 1;(i<iSize-1);i++,Time++)        //Outer Loop
    {
       
        for(j =0;j<iSize - 1 -i;j++)        //Inner loop
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
    cout<<"\n Number of Passes : "<<pass<<"\n";
    cout<<"\n Number of Pass : "<<Time<<"\n";
    Sorted = true;
}
void ArrayX :: BubbleSortEfficient()
{
    int i = 0;
    int j = 0;
    int temp =0;

    bool bFlag = true;


    /*if(Sorted == true)          //Important Filter
    {
        return;
    }*/
    bFlag = true;
    for(i = 0;(i<iSize-1) && (bFlag == true);i++)        //Outer Loop
    {
        bFlag = false;
        for(j =0;j<iSize - 1 -i;j++)        //Inner loop
        {
            if(Arr[j]>Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                bFlag = true;
            }
        }
        cout<<"\n Data After Pass : "<<i +1<<"\n";
       
        Display();

    }
     cout<<"\n Number of Passes : "<<i<<"\n";
    Sorted = true;
}



void ArrayX :: SelectionSort(int arr[],int n)
{
    int index_of_min = 0;

    for(int x = 0;x<n;x++)
    {
        index_of_min = x;

        for(int y = x;y<n;y++)
        {
            if(arr[index_of_min]>Arr[y])
            {
                index_of_min = y;
            }
        }
        int temp = arr[x];
        arr[x] = Arr[index_of_min];
        arr[index_of_min] = temp; 
    }
}

void ArrayX :: InsertionSort(int arr[],int n)
{
    int i,key,j;

    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i -1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j +1] = arr[j];

            j = j - 1;
        }
        arr[j +1] = key;
    }
}



int main()
{
    int iValue =0;
    bool bRet = false;
    int Arr[] = {11,21,51,12};

    cout<<"Enter the Number of Elements:\n";
    cin>>iValue;

   ArrayX aobj(iValue);

   aobj.Accept();

   cout<<"Data Before Sorting\n";

   aobj.Display();

   aobj.BubbleSortEfficient();

   cout<<"Data After Sorting\n";
   
   aobj.Display();

   

    
    return 0;
}


