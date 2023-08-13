#include<iostream>
/*
using namespace std;
class A
{
public:
    void Display()
    {
        cout<<"Parent"<<endl;
    }
};

class B:public A
{
public:
    void Display()
    {
        cout<<"Child"<<endl;
    }
};
int main()
{
    B b;
    b.Display();
    return 0;
}
*/

/*
using namespace std;
class A
{
public:
    void Display()
    {
        cout<<"Parent"<<endl;
    }
};

class B:public A
{
public:
    void Display()
    {
        cout<<"Child"<<endl;
    }
};
int main()
{
    B b;
    A *a=&b;
    a->Display();
    return 0;
}
*/



using namespace std;
class A
{
public:
    virtual void Display()
    {
        cout<<"Parent"<<endl;
    }
};

class B:public A
{
public:
    void Display()
    {
        cout<<"Child"<<endl;
    }
};
int main()
{
    B b;
    A *a=&b;
    a->Display();
    return 0;
}
