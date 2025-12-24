#include<iostream>

using namespace std;

class Arithematic
{
    private:
         int NO1,NO2;

    public:
        Arithematic(int A,int B);
        int Addition();
        int Substraction();
};

//Errors
Arithematic(int A,int B)
{
    this->NO1 = A;
    this->NO2 = B;
}

int Addition()
{
    return NO1 + NO2;
}
int Substraction()
{
    return NO1 -NO2;
}
int main()
{
    Arithematic aobj(11,10);

    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Substraction()<<"\n";
    return 0;
}