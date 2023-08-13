#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node *root=NULL;

void preorder(struct node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    else
    {
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(struct node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    else
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}

void postorder(struct node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    else
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data<<" ";
    }
}

struct node *insertNode()
{
    int n;
    cout<<"Enter data: ";
    cin>>n;
    struct node *ptr=new node;
    ptr->data=n;
    ptr->left=ptr->right=NULL;
    return ptr;
};

int main()
{
    root=insertNode();
    root->left=insertNode();
    root->left->right=insertNode();
    root->left->right->right=insertNode();
    //root->right->left->left=insertNode();
    int n;
    while(1)
    {
        cout<<"\n******MAIN MENU******"<<endl;
        cout<<"1.Preorder"<<endl;
        cout<<"2.Inorder"<<endl;
        cout<<"3.Postorder"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n)
        {
            case 1:
                preorder(root);
                break;

            case 2:
                inorder(root);
                break;

            case 3:
                postorder(root);
                break;

            case 4:
                exit(0);
                break;
        }
    }
    return 0;
}
