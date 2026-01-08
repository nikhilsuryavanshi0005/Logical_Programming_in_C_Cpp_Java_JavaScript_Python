#include<iostream>

using namespace std;

template<class T>


T Addition(T No1,T No2)
{
    T iSum = 0;

    iSum = No1 + No2;
    return iSum;
}

int main()
{

    float i =0.0f;
    float j = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter First Number:\n";
    cin>>i;

    cout<<"Enter Second Number:\n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is :"<<Ret<<"\n";

    return 0;
}