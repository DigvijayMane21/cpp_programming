#include<iostream>
// max number finding
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Max no:"<<max;
    return 0;
}



/* min number finding
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<"Min no:"<<min;
    return 0;
}
*/



/* Descending sort
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]>arr[i])
           {
               int t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/* Ascending sort
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[i])
           {
               int t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/



