#include<iostream>
using namespace std;
struct node
{
	int data;
	node*right;
	node*left;
};
node*insert(node*root,int data)
{
		node *newnode=new node;
		newnode->data=data;
		newnode->left=NULL;
		newnode->right=NULL;
		if(root==NULL)
		{	
		return newnode;
		}
		if(data<root->data)
		{
			root->left=insert(root->left,data);
		}
			else if(data>root->data)
			{
			root->right=insert(root->right,data);
			return root;
		}
		else
		{
			cout<<"DUBLICATE DATA IS NOT ALLOWED IN BINARY SEARCH TREE\n\n";
		}
	}
	
void postorder(node*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}

void preorder(node*root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

node* leftside(node*root)
{
	while(root!=NULL && root->left!=NULL)
	{
		root=root->left;
		return root;
	}
}

node*rightside(node*root)
{
	while(root!=NULL && root->right)
	{
		root=root->right;
		return root;
	}
}

node *Delete(int key,node*root)
{
	if(root==NULL)
	{
		cout<<"DATA YOU WANT TO DELETE IS NOT PRESENT \n\n";
		return NULL;
	}
	if(root->left==NULL && root->right==NULL)
	{
		delete root;
		cout<<"DELETE SUCCESSFULLY\n\n";
		return NULL;
	}
	else if(key<root->data)
	{
		root->left=Delete(key,root->left);
	}
	
	else if(key>root->data)
	{
		root->right=Delete(key,root->right);
	}
	
	else if(key==root->data)
	{
		node*temp=NULL;
		if(root->left=NULL)
		{
			temp=leftside(root->left);
			root->data=temp->data;
			root->left=Delete(temp->data,root->left);
		}
		
		else if(root->right!=NULL)
		{
			temp=rightside(root->right);
			root->data=temp->data;
			root->right=Delete(temp->data,root->right);
		}
	}
}

int main()
{
	node*root=NULL;
	int choice;
	do
	{
		cout<<endl;
		cout<<"**********BINARY SEARCH TREE**********"<<endl;
		cout<<endl<<endl;
		cout<<"PRESS 1 FOR INSERT"<<endl;
		cout<<"PRESS 2 FOR POST ORDER"<<endl;
		cout<<"Press 3 for PRE ORDER"<<endl;
		cout<<"Press 4 for IN ORDER"<<endl;
		cout<<"Press 5 for DELETE"<<endl;
		cin>>choice;
		system("cls");
		switch(choice)
		{
			case 1: 
			{
				int data;
			cout<<"ENTER DATA"<<endl;
			cin>>data;
			root=insert(root,data);
			break;
			}
		  	case 2: 
		  	{
		  	cout<<"PRE ORDER"<<endl;
		  	preorder (root);
			cout<<endl;
			break;
			}
			case 3: 
		  	{
		  	cout<<"POST ORDER"<<endl;
		  	postorder (root);
			cout<<endl;
			break;
			}
			case 4: 
		  	{
		  	cout<<"IN ORDER"<<endl;
		  	inorder (root);
			cout<<endl;
			break;
			}
			case 5:
				{
					cout<<"DELETE FUNCTION\n\n";
					int key;
					cout<<"ENTER DATA YOU WANT TO DELETE\n";
					cin>>key;
					root=Delete(key,root);
					break;
				}

			  	}
	}while(choice!=6);
	
	cout<<"OOOOPPPPSSSS!!!!!!\n";
	cout<<"I worn you from start of program\n\n\n";
	
}
