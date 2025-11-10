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
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    Student *s[n];
    for (int i = 0 ; i < n ; i++)
    {
        s[i] = new Student;
        s[i] -> getdata();
    }
    cout<<"\n Student Details: \n";
    for (int i = 0 ; i < n ; i++)
    {
        s[i] -> showdata();
        delete s[i];
    }
}