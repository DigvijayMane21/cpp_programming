#include<iostream>
#define size 100
using namespace std;

int main()
{
    int cnt=0;
    bool doors[size+1]={false};

    for(int i=1;i<=size;i++)
    {
        for(int j=i;j<=size;j+=i)
        {
            doors[j]= !doors[j];
        }
    }

    cout<<"Indices of open doors are:"<<endl;
    for(int j=1;j<=size;j++)
    {
        if(doors[j])
        {
            cout<<j<<" ";
            cnt++;
        }
    }
    cout<<"\nNo of open doors = "<<cnt;
}
