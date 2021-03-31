#include<iostream>

using namespace std;

class sum
{
private:
    int a,b,add;
    float c, add2;
public:
    void getdata();
    void sum1();
    void sum2();
    void result();
};

inline void sum::getdata()
{
    cout << "Enter the value of the two integers :" << endl;
    cin >> a >> b;
    cout << "Enter the value of the floating number :" << endl;
    cin >> c ;
}
inline void sum::sum1()
{
    add = a + b;
}
inline void sum::sum2()
{
    add2 = a + c;
}
inline void sum::result()
{
    cout << " The sum of two integers is : " << add << endl;
    cout << "The sum of one integer and one floating number is : " << add2 <<endl;
}

int main()
{
    sum s1, s2;
    s1.getdata();
    s1.sum1();
    s1.sum2();
    s1.result();
    return 0;
}
