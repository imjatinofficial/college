#include<iostream>

using namespace std;

class Test
{
public:
    int a;
    Test()
    {
        a = 5;
    }
    void show()
    {
        cout << "value is " << a << endl;
    }
    Test operator ++ ()
    {
        --a;
    }
};
int main()
{
    Test obj1;
    obj1.show();
    ++obj1;
    obj1.show();
    return 0;
}
