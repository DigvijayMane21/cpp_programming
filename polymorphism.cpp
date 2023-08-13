#include<iostream>
using namespace std;

class Maths
{
	public:
		void Add(int x,int y);
		void Add(int x,int y,int z);
		void Add(float x,float y);
		void Add(float x,int y);
};

void Maths::Add(int x,int y)
{
	cout<<"Addition: "<<x+y<<endl;
}

void Maths::Add(int x,int y,int z)
{
	cout<<"Addition: "<<x+y+z<<endl;
}

void Maths::Add(float x,float y)
{
	cout<<"Addition: "<<x+y<<endl;
}

void Maths::Add(float x,int y)
{
	cout<<"Addition: "<<x+y<<endl;
}

int main()
{
	Maths mt;
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;

	mt.Add(x,y);
	mt.Add(x,y,10);
	mt.Add(8.2f,8.8f);
	mt.Add(8.2f,x);

	return 0;
}
