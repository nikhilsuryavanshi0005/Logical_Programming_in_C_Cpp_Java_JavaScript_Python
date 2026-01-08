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
    cout<<"Addition of Characters :"<<Addition('a','b')<<"\n";
    cout<<"Addition of Integers :"<<Addition(11,10)<<"\n";
    cout<<"Addition of float :"<<Addition(78.22f,67.88f)<<"\n";
    cout<<"Addition of double :"<<Addition(244.378344734,45.553)<<"\n";

    return 0;
}