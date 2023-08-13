#include<iostream>
#include<stdlib.h>
using namespace std;

struct BST
{
struct BST *left;
int data;
struct BST *right;
};

class BSTree
{
public:
BST *root;
void create();
void insert();
int height(BST*);
void min_val();
void inOrder(struct BST *node);
void mirror_img(struct BST *node);
void search(int key);
void preOrder(struct BST *node);
BSTree()
{
root=NULL;
}
};

void BSTree::min_val()
{
	BST *temp;
	int min;
	temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	cout<<"The smallest number in the tree is: "<<(temp->data)<<endl;
}

int BSTree::height(BST *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		if(height(root->right)>height(root->left))
		{
			return(1+height(root->right));
		}
		else
		{
			return(1+height(root->left));
		}
	}
}

void BSTree::create()
{
	BST *curr,*temp;
	int ans=1,data;

	do
	{
		curr=new BST;
		cout<<"enter data: ";
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
				if(curr->data<=temp->data)
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
				else
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
			}
		}
		cout<<"want to continue(1/0): ";
		cin>>ans;
	}while(ans!=0);
}

void BSTree::insert()
{
	BST *curr,*temp;
	int ans=1;
	curr=new BST;
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
			if(curr->data<=temp->data)
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
			else
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
		}
	}
}


void BSTree::search(int key)
{
	BST *curr;
	curr=root;
	while(curr!=NULL)
	{
		if(curr->data==key)
		{
			cout<<"Key Found.";
			break;
		}
		else
		{
			if(key<curr->data)
			{
				curr=curr->left;
			}
			else
			{
				curr=curr->right;
			}
		}
	}
	if(curr==NULL)
	{
		cout<<"Key Not Found.";
	}
}

void BSTree::inOrder(struct BST *node)
{
	if (node==NULL)
	{
		return;
	}
	else
	{
		inOrder(node->left);
		cout<<node->data<<" ";
		inOrder(node->right);
	}
}

void BSTree::mirror_img(struct BST *node)
{
	if(node==NULL)
	{
		return;
	}
	else
	{
		struct BST *temp;
		mirror_img(node->left);
		mirror_img(node->right);

		//pointer swapping
		temp=node->left;
		node->left=node->right;
		node->right=temp;
	}
}

void BSTree::preOrder(struct BST *node)
{
	if (node==NULL)
	{
		return;
	}
	else
	{
		cout<<(node->data)<<" ";
		preOrder(node->left);
		preOrder(node->right);
	}
}

int main()
{
	int ch,key;
	BSTree bst;
	struct BST *temp=(struct BST*)malloc(sizeof(struct BST*));
	//BST *temp;
	while(1)
	{
		cout<<"\n***********************"<<endl;
		cout<<"Operations on BST"<<endl;
		cout<<"1. Create a tree."<<endl;
		cout<<"2. Insert Element."<<endl;
		cout<<"3. Height of the tree."<<endl;
		cout<<"4. Smallest value in the tree."<<endl;
		cout<<"5. Display."<<endl;
		cout<<"6. Mirror image of the tree."<<endl;
		cout<<"7. Search an element."<<endl;
		cout<<"8. Exit."<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				bst.create();
				break;
			case 2:
				bst.insert();
				break;
			case 3:
				cout<<"Height of the tree is: "<<bst.height(bst.root);
				break;
			case 4:
				bst.min_val();
				break;
			case 5:
				cout<<"Inorder traversal of the constructed tree is: "<<endl;
				bst.inOrder(bst.root);
				cout<<"\nPreorder traversal of the constructed tree is: "<<endl;
				bst.preOrder(bst.root);
				break;
			case 6:
				cout<<"Inorder traversal of the constructed tree is: "<<endl;
				bst.inOrder(bst.root);

				bst.mirror_img(bst.root);

				cout<<"\nInorder traversal of the mirror image tree is: "<<endl;
				bst.inOrder(bst.root);
				break;
			case 7:
				cout<<"Enter the number to search: ";
				cin>>key;
				bst.search(key);
				break;
			case 8:
				exit(0);
		}
	}
	//return 0;
}
