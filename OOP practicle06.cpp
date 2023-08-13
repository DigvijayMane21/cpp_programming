#include<iostream>
using namespace std;

template <class T>

T sorting(int num)
{
	T a[num];
	T temp;
	cout<<"Enter elements: "<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"\nElements after sorting : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl<<endl;
}

int main()
{
	int num,ch;

	do
	{
		cout<<"******Menu********"<<endl;
		cout<<"1.Sort int numbers"<<endl;
		cout<<"2.Sort float numbers"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		cout<<"\nTotal no of elements: "<<endl;
		cin>>num;
		switch(ch)
		{
			case 1:
				sorting<int>(num);
				break;
			case 2:
				sorting<float>(num);
				break;
			default:
				exit(0);
				break;
		}
	}while(ch!=2);
	
	return 0;
}
