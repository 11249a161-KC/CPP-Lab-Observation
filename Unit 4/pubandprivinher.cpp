#include<iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
        cout<<"Public base function \n";
    }
};

class PublicDerived : public Base
{
    public:
    void display()
    {
        show();
    }
};

class PrivateDerived : private Base
{
    public:
    void display()
    {
        show();
    }
};

int main()
{
    PublicDerived pub;
    PrivateDerived priv;
    pub.display();
    priv.display();
    //pub.show();      Error
    //priv.show();     Error
}