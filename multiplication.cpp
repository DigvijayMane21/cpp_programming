#include<iostream>
using namespace std;
int main()
{
    int a,b,product,division;
    try
    {
        cout<<"Enter first number: "<<endl;
        cin>>a;
        cout<<"Enter second number: "<<endl;
        cin>>b;
        if(b==0)
        {
            throw b;  //throw should only be used inside try
        }
        product=a*b;
        division=a/b;
        cout<<"product of "<<a<<" & "<<b<<" is : "<<product<<endl;
        cout<<"divison of "<<a<<" & "<<b<<" is : "<<division<<endl;
    }

    catch(char x)
    {
        cout<<"We cant divide a number by zero."<<endl;
    }
    catch(...)
    {
        cout<<"BYE"<<endl;
    }

    cout<<"Good Job.";
    return 0;

}
