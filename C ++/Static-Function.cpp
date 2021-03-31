#include<iostream>

using namespace std;

class A
{
private:
    static int a, b;
public:
    static void show()
    {
        cout << "A is : " << a << "B is : " << b << endl;
    }
};

static int A::a=2;
static int A::b=4;

int main()
{
    A ob1;
    ob1.show();
    return 0;
}
