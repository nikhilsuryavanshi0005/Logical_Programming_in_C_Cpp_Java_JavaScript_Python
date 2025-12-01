#include<iostream>

using namespace std;

template<class T>

T Maximum(T No1,T No2)
{
    if(No1>No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
    
    
}

int main()
{
    int iValue1 = 10,iValue2 = 11,iRet = 0;
    double dValue1 = 10.0,dValue2= 11.0,dRet = 0.0;
    float fValue1 = 10,fValue2 = 11,fRet = 0;
    
    iRet = Maximum(iValue1,iValue2);
    dRet = Maximum(dValue1,dValue2);
    fRet = Maximum(fValue1,fValue2);
    
    cout<<"Maximum Number of int is :"<<iRet<<"\n";

    cout<<"Maximum Number double is :"<<dRet<<"\n";

    cout<<"Maximum Number float is :"<<fRet<<"\n";

    

    return 0;
}