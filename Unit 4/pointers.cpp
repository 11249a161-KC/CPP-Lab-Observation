#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;

    public:
    void getdata()
    {
        cout<<"Enter roll and name:";
        cin>>roll>>name;
    }

    void showdata()
    {
        cout<<"Roll:"<<roll<<",Name:"<<name<<endl;
    }
};

int main()
{
    Student s1, *ptr;
    ptr = &s1;
    ptr -> getdata();
    ptr -> showdata();
}