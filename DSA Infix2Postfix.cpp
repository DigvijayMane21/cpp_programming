#include<iostream>
#define maxSize 10
using namespace std;

char arr[maxSize];
int indx=-1;

void push(char k)
{
        arr[++indx]=k;
}

char pop()
{
        char k=arr[indx];
        indx--;
        return k;
}

int priority(char k)
{
    if(k=='+' || k=='-')
    {
        return 1;
    }
    else if(k=='*' || k=='/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

string in2post(string exp)
{
    string out="";
    int i=0;
    while(exp[i]!='\0')
    {
        char k=exp[i];
        if(k=='(')
        {
            push(k);
        }
        else if(k==')')
        {
            while(arr[indx]!='(')
            {
                out=out+pop();
            }
            pop();
        }
        else if(k>='a' && k<='z')
        {
            out=out+k;
        }
        else
        {
            while(priority(arr[indx])>=priority(k))
            {
                out=out+pop();
            }
            push(k);
        }
        i++;
    }

    while(indx>=0)
    {
        out=out+pop();
    }
    return out;
}
int main()
{
    string exp,res;
    cout<<"Enter the infix expression: "<<endl;
    cin>>exp;
    res=in2post(exp);
    cout<<"The postfix expression is: "<<endl;
    cout<<res<<endl;
    return 0;
}

