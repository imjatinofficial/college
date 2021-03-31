#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b, c, s, p, area;
    cout<<"Enter the value of the three sides of the triangle : "<<endl;
    cin>>a>>b>>c;
    p = a + b + c;
    s = p/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of the triangle is : "<<area;
    return 0;
}


