// OOP approach (Specific)

#include<iostream>

using namespace std;

class Arithematic
{
    public :
        int iNo1;
        int iNo2;
    
    Arithematic(int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    int Addition()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }
    int Substraction()
    {
        int Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }

};

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(101,50);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";

    return 0;
}