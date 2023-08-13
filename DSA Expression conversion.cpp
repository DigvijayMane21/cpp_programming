#include<iostream>
#include<stdlib.h>
#define maxSize 10

using namespace std;
int indx=-1;
string arr[maxSize+1];

void push(string k)
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

string pop()
{
    if(indx==-1)
    {
        cout<<"Underflow."<<endl;
    }
    else
    {
        string k=arr[indx];
        indx--;
        return k;
    }
    return "";
}

int main()
{
    string exp;
    cout<<"Enter a postfix expression: "<<endl;
    cin>>exp;

    for(int i=0;i<exp.length();i++)
    {
        string res;
        string k=exp[i]+"";
        if(k>"a" && k<"z")
        {
            push(k);
        }
        else
        {
            string n2=pop(),n1=pop();
            char d=exp[i];
            switch(d)
            {
                case '+':
                    res=n1+"+"+n2;
                    break;

                case '-':
                    res=n1+"-"+n2;
                    break;

                case '*':
                    res=n1+"*"+n2;
                    break;

                case '/':
                    res=n1+"/"+n2;
                    break;
            }
            push(res);
        }
    }
    string fr=pop();
    cout<<"The solution of the given expression is: "<<fr<<endl;
    return 0;

}

