#include <stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    char info ;
    struct node* left,*right;
    struct node* nxt ;
};
struct node *head=NULL;

struct node* newnode(char data)
{
    struct node* ptr = new node;
    ptr->info = data ;
    ptr->left=ptr->right = NULL ;
    ptr->nxt = NULL ;
    return ( ptr ) ;
}

void del(struct node * node)
{
    if(node==NULL)
    {
        return ;
    }
    del(node->left);
    del(node->right);
    cout<<"\nDeleting node: "<<node->info;
    delete(node);
}

void Postorder(struct node* node)
{
    if ( node == NULL)
        return ;
    else
    {
    Postorder ( node->left ) ;
    Postorder ( node->right ) ;
    cout<<node->info;
    }
}

void push ( struct node* x )
{
    if ( head == NULL )
    head = x ;
    else
    {
        x->nxt = head ;
        head = x ;
    }
}
struct node* pop()
{
    struct node* n = head ;
    head = head->nxt ;
    return n ;
}
int main()
{
    string t;
    cout<<"Enter a prefix Expression:"<<endl;
    cin>>t;
    int n = t.length();
    int i ;
    struct node *p , *q , *s ;
    for ( i = n-1 ; i>=0 ; i-- )
    {
        if ( t[i] == '+' || t[i] == '-' || t[i] == '*' || t[i] == '/' || t[i] == '^' )
        {
            s = newnode ( t [ i ] ) ;
            p = pop() ;
            q = pop() ;
            s->left = p;
            s->right = q;
            push(s);
        }
        else
        {
            s = newnode ( t [ i ] ) ;
            push ( s ) ;
        }
    }
    cout<<"\nThe Postorder Traversal of Tree: ";
    Postorder ( s );
    del(head);
    //return 0;     
}

