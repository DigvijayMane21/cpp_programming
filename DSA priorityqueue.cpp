#include<iostream>
#define maxSize 10
using namespace std;
int F=-1,R=-1;
int arr[maxSize+1];

void Sort()
{
    for(int i=F;i<=R;i++)
    {
        for(int j=i+1;j<=R;j++)
        {
            if(arr[j]>arr[i])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}

void enqueue()
{
    if(R==maxSize)
    {
        cout<<"Overflow."<<endl;
    }
    else
    {
        int n;
        cout<<"Enter data: ";
        cin>>n;
        if(F==-1)
        {
            arr[++F]=n;
            R++;
        }
        else
        {
            arr[++R]=n;
            Sort();
        }
    }
}

void dequeue()
{
    if(F==-1)
    {
        cout<<"Underflow."<<endl;
    }
    else
    {
        if(R==F)
        {
            arr[F]=0;
            F=R=-1;
        }
        else
        {
            arr[F]=0;
            F++;
        }
    }
}


void display()
{
    for(int i=0;i<=maxSize;i++)
    {
        cout<<arr[i]<<" | ";
    }
}

int main()
{
    int n;
    while(1)
    {
        cout<<"\n*******Main Menu*********"<<endl;
        cout<<"1.Insert an element."<<endl;
        cout<<"2.Delet an element."<<endl;
        cout<<"3.Display the queue."<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter your choice."<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                enqueue();
                display();
                break;
            case 2:
                dequeue();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
    }
    return 0;
}

