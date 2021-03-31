#include<iostream>

using namespace std;

class complex
{
  private:
      int real, img;
  public:
      void getdata()
      {
         cout<<"Enter the value of the real and imaginary value of the complex number: "<<endl;
         cin>>real>>img;
      }
      void show()
      {
          cout<<"The complex number is "<<real<<" + "<<img<<"i"<<endl;
      }
      void sum(complex c1,complex c2)
      {
          real = c1.real+c2.real;
          img = c1.img+c2.img;
          cout<<"The sum of the numbers is "<<real<<" + "<<img<<"i"<<endl;
      }

};



int main()
{
    complex c1, c2, c3;
    c1.getdata();
    c1.show();
    c2.getdata();
    c2.show();
    c3.sum(c1,c2);
    return 0;
}
