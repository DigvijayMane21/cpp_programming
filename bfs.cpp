#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of cities: "<<endl;
    cin>>n;
    int matrix[n][n];
    matrix[n][n]=0;
    int cnt,cntr=0,iso;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                cout<<"Is the path present from "<<i<<" to "<<j<<" if yes enter the time taken or 0: "<<endl;
                cin>>matrix[i][j];
            }
            if(i==j)
            {
                matrix[i][j]=0;
            }
            if(matrix[i][j]!=0)
            {
                cnt++;
            }
        }
    }

    cout<<"The matrix is as follows: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"\t"<<i<<"\t";
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        cout<<i;
        for(int j=1;j<=n;j++)
        {
            cout<<"\t"<<matrix[i][j]<<"\t";
            if(j==n)
            {
                cout<<endl;
            }
        }
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(matrix[i][j]==0 && matrix[j][i]==0)
                {
                    iso=matrix[i][j];
                    cntr++;
                }
            }
        }
    }

    cout<<"\nThe adjacency list will be as follows: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"-->";
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(matrix[i][j]!=0)
                {

                    cout<<j<<"-->";
                }
            }
        }
        cout<<"NULL"<<endl;
    }

    if(cntr==0)
    {
        cout<<"\nThe graph is connected graph."<<endl;
    }
    else
    {
        cout<<"\nThe graph is not a connected graph."<<endl;
        cout<<"The isolated node is: "<<iso<<endl;
    }
    return 0;
}
