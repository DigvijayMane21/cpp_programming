#include<iostream>
#include <string>
#define maxSize 20
using namespace std;

int top = -1;
string arr[maxSize];

void push(string k)
{
    arr[++top] = k;
}

string pop()
{
    string k = arr[top];
    top--;
    return k;
}

void post_to_in(string k)
{
    string out = "";
    for (int i = 0; i < k.length(); i++)
    {
        if (isalpha(k[i]))
        {
            string operand(1, k[i]);
            push(operand);
        }
        else
        {
            string k1 = pop();
            string k2 = pop();
            string temp = "(" + k2 + k[i] + k1 + ")";
            push(temp);
        }
    }
    out = pop();
    cout << "Infix Expression: " << out;
}

int main()
{
    string exp;
    cout << "Enter Postfix Expression: ";
    cin >> exp;
    post_to_in(exp);
    return 0;
}
