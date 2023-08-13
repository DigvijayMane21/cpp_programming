#include <iostream>
#include <stack>
#include <stdlib.h>
using namespace std;

struct node
{
    char info;
    struct node* left;
    struct node* right;
    struct node* nxt;
};

struct node* head = NULL;

struct node* newnode(char data)
{
    struct node* ptr = new node;
    ptr->info = data;
    ptr->left = ptr->right = NULL;
    ptr->nxt = NULL;
    return ptr;
}

void del(struct node* temp)
{
    if (temp == NULL)
    {
        return;
    }
    del(temp->left);
    del(temp->right);
    cout << "\nDeleting node: " << temp->info;
    delete (temp);
}

void Postorder(struct node* root)
{
    if (root == NULL)
        return;

    stack<struct node*> s;
    struct node* curr = root;
    struct node* prev = NULL;

    do
    {
        // Traverse to the leftmost node
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        // Check if the current node's right child exists
        while (curr == NULL && !s.empty())
        {
            curr = s.top();

            // Check if the current node's right child is processed or not
            if (curr->right == NULL || curr->right == prev)
            {
                cout << curr->info;
                s.pop();
                prev = curr;
                curr = NULL;
            }
            else
            {
                curr = curr->right;
            }
        }
    } while (!s.empty());
}

void push(struct node* x)
{
    if (head == NULL)
        head = x;
    else
    {
        x->nxt = head;
        head = x;
    }
}

struct node* pop()
{
    struct node* n = head;
    head = head->nxt;
    return n;
}

int main()
{
    string t;
    cout << "Enter a prefix Expression:" << endl;
    cin >> t;
    int n = t.length();
    struct node* p, * q, * s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (t[i] == '+' || t[i] == '-' || t[i] == '*' || t[i] == '/' || t[i] == '^')
        {
            s = newnode(t[i]);
            p = pop();
            q = pop();
            s->left = p;
            s->right = q;
            push(s);
        }
        else
        {
            s = newnode(t[i]);
            push(s);
        }
    }
    cout << "\nThe Postorder Traversal of Tree: ";
    Postorder(s);
    del(head);
    return 0;
}
