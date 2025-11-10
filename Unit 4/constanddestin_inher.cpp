#include<iostream>
using namespace std;

class Book
{
    public:
    Book()
    {
        cout<<"Base class Book constructor \n";
    }
    ~Book()
    {
        cout<<"Base class Book destructor \n";
    }
};

class LibraryBook : public Book
{
    public:
    LibraryBook()
    {
        cout<<"Derived class Library Book constructor \n";
    }
    ~LibraryBook()
    {
        cout<<"Derived class Library Book Destructor \n";
    }
};

int main()
{
    LibraryBook lb;
}