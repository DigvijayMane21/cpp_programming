#include<iostream>
using namespace std;
class Complex
{
    int x,y;
public:
    Complex()
    {
        x=0;
        y=0;
    }
    Complex operator +(Complex);
    Complex operator *(Complex);

    friend istream &operator>>(istream &input,Complex &t)
    {
        cout<<"Enter real part: \n";
        cin>>t.x;
        cout<<"Enter img part: \n";
        cin>>t.y;
    }
    friend ostream &operator<<(ostream &output,Complex &t)
    {
        cout<<t.x<<"+"<<t.y<<"i\n";
    }
};

Complex Complex::operator + (Complex c)
{
    Complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return (temp);
}

Complex Complex::operator * (Complex c)
{
    Complex temp1;
    temp1.x=(x*c.x)-(y*c.y);
    temp1.y=(y*c.x)+(x*c.y);
    return (temp1);
}

int main()
{
    Complex c1,c2,c3,c4;
    cout<<"Default complex no is: \n";
    cout<<c1;
    cout<<"Enter first no: \n";
    cin>>c1;
    cout<<"Enter second no: \n";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"Addition is: \n";
    cout<<c3;
    cout<<"Multiplication is: \n";
    cout<<c4;
}

