#include<iostream>
using namespace std;

template<class T>
class Calculator
{
    public:
    T add (T a, T b) { return a+b; }
    T sub (T a, T b) { return a-b; }
    T mul (T a, T b) { return a*b; }

    T divide (T a, T b)
    {
        if (b == 0)
        {
            cout<<"Error: Division by zero. Returning 0 \n";
            return 0;
        }
        return a/b;
    }
};

int main()
{
    Calculator<int> ci;
    cout<<"Int add:"<<ci.add(10,5)<<"Divide:"<<ci.divide(10,2)<<endl;

    Calculator<double> cd;
    cout<<"Double multiply:"<<cd.mul(2.5,4.0)<<"Subtract:"<<cd.sub(5.0,3.2)<<endl;

    return 0;
}