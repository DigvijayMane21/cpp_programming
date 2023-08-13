#include<iostream>
using namespace std;
class A
{
public:
    int p;
};
class B
{
public:
    int q;
};

class C:public A,public B
{
public:
    int r;

};
int main()
{
    C c;
    c.p=10;
    c.q=20;
    c.r=30;
    cout<<c.p<<endl;
    cout<<c.q<<endl;
    cout<<c.r<<endl;
   return 0;
}
