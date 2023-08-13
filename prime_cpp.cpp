// Write a programme prime take argument from main function and print given number is prime or not.

#include<iostream>
using namespace std;

void prime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        cout<< "The number " << n << " is prime.";
    }
    else
    {
        cout<< "The number " << n << " is not prime.";
    }
    return;
}
int main()
{
    int n;
    cout<< "Enter a number:";
    cin>>n;
    prime(n);

    return 0;
}

