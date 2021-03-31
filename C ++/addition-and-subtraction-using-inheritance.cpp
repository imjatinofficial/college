#include<iostream>

using namespace std;

class values
{
public:
    int base, height;
    void getdata()
    {
        cout << "Enter the values of the base and height :" << endl;
        cin >> base >> height;
    }
};
class area_rec: public values
{
public:
    void area()
    {
        cout << "The area of the rectangle is " << base*height << endl;
    }
};
int main()
{
    area_rec obj1;
    obj1.getdata();
    obj1.area();
    return 0;
}
