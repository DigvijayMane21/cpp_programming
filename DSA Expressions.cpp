#include<iostream>
#define maxSize 10

using namespace std;
int indx=-1;
int arr[maxSize+1];

void push(int k)
{
    if(indx==maxSize)
    {
        cout<<"Overflow."<<endl;
    }
    else
    {
        arr[++indx]=k;
    }
}

int pop()
{
    if(indx==-1)
    {
        cout<<"Underflow."<<endl;
    }
    else
    {
        int k=arr[indx];
        indx--;
        return k;
    }
    return 0;
}

int main()
{
    string exp;
    cout<<"Enter a postfix expression: "<<endl;
    cin>>exp;

    for(int i=0;i<exp.length();i++)
    {
        int res;
        char k=exp[i];
        if(k>='0' && k<='9')
        {
            push(k-'0');
        }
        else
        {
            int n2=pop(),n1=pop();
            switch(k)
            {
                case '+':
                    res=n1+n2;
                    break;

                case '-':
                    res=n1-n2;
                    break;

                case '*':
                    res=n1*n2;
                    break;

                case '/':
                    res=n1/n2;
                    break;
            }
            push(res);
        }
    }
    int fr=pop();
    cout<<"The solution of the given expression is: "<<fr<<endl;
    return 0;

}
