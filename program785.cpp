
#include<iostream>


using namespace std;

#define INC_ORDER 1
#define DEC_ORDER 2
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
        void BubbleSortEfficientX(int iOption);

        void SelectionSort();
        void InsertionSort();
        
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
    cout<<"\n Number of Iterations : "<<Time<<"\n";
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

// 1 : Increasing
// 2 : Decreasing

void ArrayX :: BubbleSortEfficientX(int iOption = INC_ORDER)
{
    int i = 0;
    int j = 0;
    int temp =0;

    bool bFlag = true;

    if(iOption  < INC_ORDER || iOption > DEC_ORDER)
    {
        cout<<"Invalid Option for Sorting\n";
        cout<<"1 : Increasing\n";
        cout<<"2 : Decreasing\n";
        return;
    }

    /*if(Sorted == true)          //Important Filter
    {
        return;
    }*/
    bFlag = true;
    if(iOption == INC_ORDER)                
    {
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
        

    }
    else if(iOption == DEC_ORDER)           // Decreasing
    {
        for(i = 0;(i<iSize-1) && (bFlag == true);i++)        //Outer Loop
        {
            bFlag = false;
       
            for(j =0;j<iSize - 1 -i;j++)        //Inner loop
            {
                if(Arr[j] < Arr[j + 1])
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
       

              
            
    }
        
      
    
    cout<<"\n Number of Passes : "<<i<<"\n";
    Sorted = true;
}



void ArrayX :: SelectionSort()
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int min_index = 0;

    for(i= 0; i < iSize -1;i++)
    {
        min_index = i;

        for(j = i+1;j<iSize;j++)
        {
            if(Arr[j]<Arr[min_index])
            {
                min_index = j;
            }
        }
        if(i != min_index)
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp; 
        }
       
    }
}

void ArrayX :: InsertionSort()
{
    int i,key,j;

    for(i=1;i<iSize;i++)
    {
        key = Arr[i];
        j = i -1;

        while(j >= 0 && Arr[j] > key)
        {
            Arr[j +1] = Arr[j];

            j = j - 1;
        }
        Arr[j +1] = key;
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

   // 1 : Increasing
   // 2 : Decreasing
   //aobj.BubbleSortEfficientX(DEC_ORDER);

   aobj.SelectionSort();

   cout<<"Data After Sorting\n";
   
   aobj.Display();

   

    
    return 0;
}


