#include<iostream>

using namespace std;

template<class T>
int CountFrequency(T Arr[],int iSize, T No)
{
             
    int iCnt = 0;

    T iCount;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]== No)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,20.2f};
    int iRet = 0.0f;

    
    
   

    iRet = CountFrequency(Brr,5,20.2f);

    cout<<"Frequency of Number is :"<<iRet<<"\n";
    
    return 0;
}