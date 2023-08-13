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

struct node *insertNode(struct node *root,int n)
{
    if(root==NULL)
    {
        struct node *ptr=new node;
        ptr->data=n;
        ptr->left=ptr->right=NULL;
        root=ptr;
    }
    else if(n<root->data)
    {
        root->left=insertNode(root->left,n);
    }
    else if(n>root->data)
    {
        root->right=insertNode(root->right,n);
    }
    else
    {
        cout<<"Already present."<<endl;
        return NULL;
    }
    return root;
}

struct node *Max(struct node *root)
{
   if(root==NULL)
   {
       cout<<"Tree is empty."<<endl;
       return NULL;
   }
   else if(root->right)
   {
       root=Max(root->right);
   }
   else
   {
       return root;
   }
}

struct node *Min(struct node *root)
{
   if(root==NULL)
   {
       cout<<"Tree is empty."<<endl;
       return NULL;
   }
   else if(root->left)
   {
       root=Min(root->left);
   }
   else
   {
       return root;
   }
}

struct node *Search(struct node *root,int n)
{
    if(root==NULL)
    {
        cout<<n<<" not found."<<endl;
        return NULL;
    }
    else if(n<root->data)
    {
        root=Search(root->left,n);
    }
    else if(n>root->data)
    {
        root=Search(root->right,n);
    }
    else
    {
        return root;
    }
}

int Count(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int x=Count(root->left);
        int y=Count(root->right);
        return 1+x+y;
    }
}

int Height1(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        if(Height1(root->right)>Height1(root->left))
        {
            return(1+Height1(root->right));
        }
        else
        {
            return(1+Height1(root->left));
        }
    }
}

int Height2(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int x=Height2(root->left);
        int y=Height2(root->right);
        if(x>y)
        {
            return 1+x;
        }
        else
        {
            return 1+y;
        }
    }
}

struct node *deleteNode(struct node *root,int n)
{
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
        return NULL;
    }
    else if(n<root->data)
    {
        root->left=deleteNode(root->left,n);
    }
    else if(n>root->data)
    {
        root->right=deleteNode(root->right,n);
    }
    else
    {
        struct node *temp;
        if(root->left && root->right)
        {
            temp=Min(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
        else if(root->left)
        {
            temp=root;
            root=root->left;
            delete(temp);
        }
        else if(root->right)
        {
            temp=root;
            root=root->right;
            delete(temp);
        }
        else
        {
            root=NULL;
            return root;
        }
        return root;
    }
}

int main()
{
    struct node *out,*res,*Sr,*D,*S;
    int data,cnt,H1,H2,del;
    char N;
   /* do
    {
        cout<<"Enter data: ";
        cin>>data;
        root=insertNode(root,data);
        cout<<"Do you want to continue(y/n): ";
        cin>>N;
    }while(N=='y'||N=='Y'); */
    int ch;
    while(1)
    {
        cout<<"\n******MAIN MENU******"<<endl;
        cout<<"0.Insert"<<endl;
        cout<<"1.Preorder"<<endl;
        cout<<"2.Inorder"<<endl;
        cout<<"3.Postorder"<<endl;
        cout<<"4.Maximum number using recurssion."<<endl;
        cout<<"5.Minimum number using recurssion."<<endl;
        cout<<"6.Search for given number."<<endl;
        cout<<"7.Count the number of nodes in the tree."<<endl;
        cout<<"8.Height of the tree."<<endl;
        cout<<"9.Delete a node."<<endl;
        cout<<"10.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 0:
                cout<<"Enter data: ";
                cin>>data;
                root=insertNode(root,data);
                break;
            case 1:
                cout<<"Preorder is: ";
                preorder(root);
                cout<<endl;
                break;

            case 2:
                cout<<"Inorder is: ";
                inorder(root);
                cout<<endl;
                break;

            case 3:
                cout<<"Postorder is: ";
                postorder(root);
                cout<<endl;
                break;

            case 4:
                cout<<"Maximum number (using recurrsion) in the tree is: ";
                out=Max(root);
                if(out!=NULL)
                {
                    cout<<"Max Data : "<<out->data<<endl;
                }
                break;

            case 5:
                cout<<"Minimum number (using recurrsion) in the tree is: ";
                res=Min(root);
                if(out!=NULL)
                {
                    cout<<"Min Data : "<<res->data<<endl;
                }
                break;

            case 6:
                int sr;
                cout<<"Enter the number to search: ";
                cin>>sr;
                Sr=Search(root,sr);
                if(Sr!=NULL)
                {
                    cout<<sr<<" Is present."<<endl;
                }
                break;

            case 7:
                cnt=Count(root);
                cout<<"Number of nodes in the tree are: "<<cnt;
                break;

            case 8:
                H1=Height1(root);
                H2=Height2(root);
                cout<<"The height of the tree is: "<<(H1-1)<<endl;
                cout<<"The height of the tree is: "<<(H2-1);
                break;

            case 9:
                cout<<"Enter the data of node you want to delete: ";
                cin>>del;
                S=Search(root,del);
                if(S!=NULL)
                {
                    D=deleteNode(root,del);
                    cout<<del<<" deleted successfully.."<<endl;
                }
                else
                {
                    cout<<del<<" element not found."<<endl;
                }
                break;

            case 10:
                cout<<"Exiting the program...."<<endl;
                return 0;
                break;
        }
    }
    return 0;
}

