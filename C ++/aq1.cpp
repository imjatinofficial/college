#include<iostream>

using namespace std;

class Publication
{
public:
    char name[20];
    int price;
    void getdata()
    {
        cout << "Enter your purchase name :" << endl;
        cin >> name;
        cout << "Enter the Price" << endl;
        cin >> price;
    }
};
class Book:public Publication
{
public:
    int page_count;
    void getdata()
    {
        cout << "Enter the number of pages in the book :" << endl;
        cin >> page_count;
    }
    void putdata()
    {
        cout << "The name of the book is " << name << "." << endl;
        cout << "Its price is " << price << "." << endl;
        cout << "It has " << page_count << " number of pages." << endl;
    }
};
class Tape:public Publication
{
public:
    float time;
    void getdata()
    {
    cout << "Enter the time in min :" << endl;
    cin >> time;
    }
    void putdata()
    {
        cout << "The name of the Tape is " << name << endl;
        cout << "Its price is " << price << endl;
        cout << "Duration of the tape is " << time << " seconds" ;
    }
};
int main()
{
    Book b1;
    Tape t1;
    b1.Publication::getdata();
    b1.Book::getdata();
    b1.Book::putdata();
    t1.Publication::getdata();
    t1.Tape::getdata();
    t1.Tape::putdata();
    return 0;
}
