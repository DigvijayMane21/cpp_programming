#include<iostream>
using namespace std;
int main()
{
    int n,num,x,rev=0;
    cout<<"Enter a positive number: ";
    cin>>num;
    n=num;
    do
    {
        x=num%10;
        rev=(rev*10)+x;
        num=num/10;
    }while(num!=0);

    if(n==rev)
    {
        cout<<"\nThe number is a palindrome.";
    }
    else
    {
        cout<<"\nThe number is not a palindrome.";
    }

    return 0;
}
