#include<iostream>
#define maxSize 10
using namespace std;

int indx=-1;
int arr[maxSize];

void push()
{
    if(indx==maxSize)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        int n;
        cout<<"Enter No: "<<endl;
        cin>>n;
        arr[++indx]=n;
        cout<<"Element added"<<endl;
    }
}

void pop()
{
    if(indx==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        int t=arr[indx];
        indx--;
        cout<<"Element "<<t<<" deleted."<<endl;
    }
}

void top()
{
    if(indx==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"The element at the top is "<<arr[indx]<<endl;
    }
}

void display()
{
    if(indx==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"\nThe stack is as follows: "<<endl;
        for(int i=indx;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\n******MAIN MENU********"<<endl;
        cout<<"1.Push."<<endl;
        cout<<"2.Pop."<<endl;
        cout<<"3.Print the element at top."<<endl;
        cout<<"4.Display stack."<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"\nEnter your choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                int n;
                cout<<"Enter the no. of elements you want to push:  "<<endl;
                cin>>n;
                for(int i=1;i<=n;i++)
                {
                    push();
                }
                break;

            case 2:
                int m;
                cout<<"Enter the no. of elements you want to pop:  "<<endl;
                cin>>m;
                for(int i=1;i<=m;i++)
                {
                    pop();
                }
                break;

            case 3:
                top();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);
                break;
        }
    }



    return 0;
}
