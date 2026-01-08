#include<iostream>

using namespace std;

int Addition(int No1,int No2)
{
    int iSum = 0;

    iSum = No1 + No2;
    return iSum;
}

int main()
{

    int i =0;
    int j = 0;
    int Ret = 0;

    cout<<"Enter First Number:\n";
    cin>>i;

    cout<<"Enter Second Number:\n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is :"<<Ret<<"\n";

    return 0;
}