//take n from user and print fibonacci serices.
#include<iostream>
using namespace std;

int fibo(int n)
{
  int t1=0,t2=1;
  int next=t1+t2;
  cout<< t1 << " " << t2;
  for(int i=3;i<=n;i++)
  {
      cout<< " " << next;
      t1=t2;
      t2=next;
      next=t1+t2;
  }
  return 0;
}

int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    fibo(n);
    return 0;
}
