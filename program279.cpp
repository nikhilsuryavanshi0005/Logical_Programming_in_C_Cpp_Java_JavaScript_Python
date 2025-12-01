// OOP approach (Generic)

#include<iostream>

using namespace std;

template<class T>
class Arithematic       //this program is class template program because all class is generic;
{
    public :
        T iNo1;
        T iNo2;
    
    Arithematic(T A,T B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    T Addition()
    {
        T Ans = 0;      //it works in program but we dont have to initialize it to 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }
    T Substraction()
    {
        T Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }

};

int main()
{
    
    Arithematic aobj1(11,10);   //Error
    Arithematic aobj2(101,50);  //Error

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";

    return 0;
}