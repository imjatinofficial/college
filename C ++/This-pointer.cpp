#include<iostream>

using namespace std;

class A
{
private:
    int a, b;
public:
    void getdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void sum()
    {
        cout << "Sum is " << a+b;
    }
};

int main()
{
    A obj;
    obj.getdata(4,5);
    obj.sum();
    return 0;
}
