#include<iostream>
using namespace std;
//Maximum no (index based)
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
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum no is: "<<max;
    return 0;
}
*/

//Maximum no (pointer based)
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
    for(int i=1;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    cout<<"Maximum no is: "<<max;
    return 0;
}
