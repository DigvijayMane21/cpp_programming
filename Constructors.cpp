#include<iostream>
using namespace std;
class Car
{
public:
    int avg;
    string name;
    Car()   //default constructor
    {
        cout<<"Object created."<<endl;
    }
    Car(int a,string nm)  //parametrized constructor
    {
        avg=a;
        name=nm;
    }
    void Display();  //member function
};
 void Car::Display()  //member function using scope resolution
    {
        cout<<"Hi I am Display."<<endl;
    }

int main()
{
    Car car;     // or use Car car=Car();
    car.avg=10;
    car.name="XYZ";
    cout<<car.avg<<endl;
    cout<<car.name<<endl;
    car.Display();


    Car cr(20,"ABC");    //or use Car cr=Car(20,"ABC");
    cout<<cr.avg<<endl;
    cout<<cr.name<<endl;

    return 0;
}
