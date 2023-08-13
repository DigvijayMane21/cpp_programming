#include<iostream>
using namespace std;
//Ascending bubble sort (pointer based)
/*
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    int *p=&arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                int t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
     for(int i=0;i<n;i++)
     {
         cout<<"\n"<<*(p+i)<<" ";
     }
     return 0;
}
*/

//Descending bubble sort
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    int *p=&arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+i)<*(p+j))
            {
                int t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
     for(int i=0;i<n;i++)
     {
         cout<<"\n"<<*(p+i)<<" ";
     }
     return 0;
}
