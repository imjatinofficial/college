#include<iostream>

using namespace std;

int main()
{
    int a[10][10], i, j, z, r, c, w;
    cout<<"Enter the values in the matrix : "<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
        cout<<"matrix is "<<endl;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
               cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Enter the row whose address is to be calculated"<<endl;
        cin>>r;
        cout<<"Enter the column whose address is to be calculated"<<endl;
        cin>>c;
        cout<<"Enter the storage size "<<endl;
        cin>>w;
        z=1000+w*(4*((r-1)+(c-1)));
        cout<<"The address of element at "<<r<<","<<c<<"location is"<<z;
        return 0;

}
