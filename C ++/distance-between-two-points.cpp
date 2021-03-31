#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int x, y, z;
    cout<<"Enter the value of x and y : "<<endl;
    cin>>x>>y;
    z = sqrt((x*x)+(y*y));
    cout<<"The distance between x and y is : "<<z;
}
