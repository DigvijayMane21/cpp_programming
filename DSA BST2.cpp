#include<iostream>
#define maxsize 20
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};
struct node *root=NULL;
struct node *arr[maxsize];
struct node *stk[maxsize];
struct node *out[maxsize];
struct node *in[maxsize];
int indxa=-1;
int indxs=-1;
int indxo=-1;
int indxi=-1;

void insertNode()
{
	struct node *curr,*temp;
	curr=new node;
	cout<<"Enter data: ";
	cin>>curr->data;
	curr->left=curr->right=NULL;
	if(root==NULL)
	{
		root=curr;
	}
	else
	{
		temp=root;
		while(1)
		{
			if(curr->data<temp->data)
			{
				if(temp->left==NULL)
				{
					temp->left=curr;
					break;
				}
				else
				{
					temp=temp->left;
				}
			}
			else if(curr->data>temp->data)
			{
				if(temp->right==NULL)
				{
					temp->right=curr;
					break;
				}
				else
				{
					temp=temp->right;
				}
			}
			else
            {
                cout<<"Duplicate element."<<endl;
                break;
            }
		}
	}
}

void push1(struct node *k)
{
    arr[++indxa]=k;
}
void push2(struct node *t)
{
    stk[++indxs]=t;
}

struct node *pop1()
{
    struct node *k=arr[indxa];
    indxa--;
    return k;
}
struct node *pop2()
{
    struct node *t=stk[indxs];
    indxs--;
    return t;
}

void preorder(struct node *root)
{
    //int k=root->data;
    push1(root);
    while(indxa!=-1)
    {
        struct node *t=pop1();
        cout<<t->data<<" ";
        if(t->right)
        {
            push1(t->right);
            //root=root->right;
        }
        if(t->left)
        {
            push1(t->left);
        }
    }
}

void postorder()
{
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
        return;
    }
    push2(root);

    while(indxs!=-1)
    {
        struct node *curr=pop2();
        out[++indxo]=curr;
        if(curr->left)
        {
            push2(curr->left);
        }
        if(curr->right)
        {
            push2(curr->right);
        }
    }
    for(int i=indxo;i>=0;i--)
    {
        cout<<out[i]->data<<" ";
    }

}

void inorder()
{
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
        return;
    }
    struct node *curr=root;
    struct node *temp;
    while(curr || indxs!= -1)
    {
        while(curr)
        {
            push2(curr);
            curr=curr->left;
        }
        if(!curr )
        {
            curr=pop2();
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else
        {
            return;
        }
    }
    //return;
}

void Max()
{
    struct node *temp=new node;
    temp=root;
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
    }
    else
    {
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        cout<<temp->data<<endl;
    }
}

void Min()
{
    struct node *temp=new node;
    temp=root;
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
    }
    else
    {
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        cout<<temp->data<<endl;
    }
}

void Search(int n)
{
    struct node *temp=root;
    int f=0;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            cout<<n<<" is found."<<endl;
            f=1;
            break;
        }
        else if(temp->data>n)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    if(f==0)
    {
        cout<<n<<" not found."<<endl;
    }
}

void deleteNode(struct node* root, int key)
{
    // Search for the node to be deleted
    struct node *temp, *pretemp = NULL;
    temp = root;
    while (temp != NULL)
    {

        if (key < temp->data)
        {
            pretemp = temp;
            temp = temp->left;
        }
        else if (key > temp->data)
        {
            pretemp = temp;
            temp = temp->right;
        }
        else
        {
            break;
        }
    }
    if (temp == NULL)
    {
        // The node to be deleted is not found in the tree
        cout<<"Element not found"<<endl;
        return ;
    }
    // Case 1: The node to be deleted has no children
    if (temp->left == NULL && temp->right == NULL)
    {
        if (pretemp == NULL)
        {
            // The node to be deleted is the root
            root = NULL;
        }
        else if (temp == pretemp->left)
        {
            pretemp->left = NULL;
        }
        else
        {
            pretemp->right = NULL;
        }
        delete temp;
    }
    // Case 2: The node to be deleted has right child only
    else if (temp->left == NULL)
    {
        struct node* child = temp->right;
        if (pretemp == NULL)
        {
            // The node to be deleted is the root
            root = child;
        }
        else if (temp == pretemp->left)
        {
            pretemp->left = child;
        }
        else
        {
            pretemp->right = child;
        }
        delete temp;
    }

    // Case 3: The node to be deleted has left child only
    else if (temp->right == NULL)
    {
        struct node* child = temp->left;
        if (pretemp == NULL)
        {
            // The node to be deleted is the root
            root = child;
        }
        else if (temp == pretemp->left)
        {
            pretemp->left = child;
        }
        else
        {
            pretemp->right = child;
        }
        delete temp;
    }
    // Case 4: The node to be deleted has two children
    else
    {
        struct node* succr = temp->right;
        pretemp = NULL;
        while (succr->left != NULL)
        {
            pretemp = succr;
            succr = succr->left;
        }
        temp->data = succr->data;
        if (pretemp == NULL)
        {
            temp->right = succr->right;
        }
        else
        {
            pretemp->left = succr->right;
        }
        delete succr;
    }
    return ;
}


int main()
{
    struct node *out,*res,*Sr,*D,*S;
    int data,cnt,H1,H2,del;
    char N;
    int ch;
    while(1)
    {
        cout<<"\n******MAIN MENU******"<<endl;
        cout<<"0.Insert"<<endl;
        cout<<"1.Preorder"<<endl;
        cout<<"2.Inorder"<<endl;
        cout<<"3.Postorder"<<endl;
        cout<<"4.Maximum number"<<endl;
        cout<<"5.Minimum number"<<endl;
        cout<<"6.Search an element."<<endl;
        cout<<"7.Delete a node."<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 0:
                insertNode();
                break;
            case 1:
                cout<<"Preorder is: ";
                preorder(root);
                cout<<endl;
                break;
            case 2:
                cout<<"Inorder is: ";
                inorder();
                cout<<endl;
                break;
            case 3:
                cout<<"Post order is: ";
                postorder();
                cout<<endl;
                break;
            case 4:
                cout<<"Maximum number in the tree is: ";
                Max();
                break;
            case 5:
                cout<<"Minimum number in the tree is: ";
                Min();
                break;
            case 6:
                int sr;
                cout<<"Enter the number to search: ";
                cin>>sr;
                Search(sr);
                break;
            case 7:
                cout<<"Enter the data of node you want to delete: ";
                cin>>del;
                deleteNode(root,del);
                cout<<del<<" deleted successfully.."<<endl;
                break;
            case 8:
                cout<<"Exiting the program...."<<endl;
                return 0;
                break;
        }
    }
    return 0;
}
