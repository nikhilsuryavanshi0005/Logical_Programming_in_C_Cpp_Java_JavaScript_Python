#include<iostream>

using namespace std;

template<class T>
T Summation(T Arr[],int iSize)
{
    T iSum = 0;         
    int iCnt = 0;

    iSum = Arr[0];      // change maken to crrect the syntax;

    for(iCnt = 1;iCnt<iSize;iCnt++)
    {
        iSum = iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};
    float fRet = 0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is :"<<fRet<<"\n";
    
    return 0;
}