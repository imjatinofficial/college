#include<conio.h>
#include<iostream>
using namespace std;
class A{
public:
    virtual void red(){
    cout<<"base";
    }
};
class B:public A{
public:
    void red(){
    cout<<"derived";
    }
};
int main(void){
    clrscr();
A *ob;
ob -> red();
getch();
}
