#include<iostream>
using namespace std;

class Employee
{
    protected:
    string name;
    int id;

    public:
    void getEmployee()
    {
        cout<<"Enter employee name and ID:";
        cin>>name>>id;
    }
};

class Manager : public Employee
{
    protected:
    string dept;

    public:
    void getManager()
    {
        getEmployee();
        cout<<"Enter Department:";
        cin>>dept;
    }
};

class Director : public Manager
{
    float salary;

    public:
    void getDirector()
    {
        getManager();
        cout<<"Enter Salary:";
        cin>>salary;
    }

    void display()
    {
        cout<<"Name:"<<name<<",ID:"<<id<<",Department:"<<dept<<",Salary:"<<salary<<endl;
    }
};

int main()
{
    Director d;
    d.getDirector();
    d.display();
}