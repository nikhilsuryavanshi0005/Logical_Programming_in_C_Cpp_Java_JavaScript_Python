#include<iostream>

using namespace std;

template<class T>

T Maximum(T No1,T No2 ,T No3)
{
    if(No1>No2 && No1>No3)
    {
        return No1;
    }
    else if(No2>No1 && No2 >No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
    
}

int main()
{
    int iValue1 = 10,iValue2 = 11,iValue3 = 12,iRet = 0;
    double dValue1 = 10.0,dValue2= 11.0,dValue3 = 12,dRet = 0.0;
    float fValue1 = 10,fValue2 = 11,fValue3= 12,fRet = 0;
    
    iRet = Maximum(iValue1,iValue2,iValue3);
    dRet = Maximum(dValue1,dValue2,dValue3);
    fRet = Maximum(fValue1,fValue2,fValue3);
    
    cout<<"Maximum Number of int is :"<<iRet<<"\n";

    cout<<"Maximum Number double is :"<<dRet<<"\n";

    cout<<"Maximum Number float is :"<<fRet<<"\n";

    

    return 0;
}