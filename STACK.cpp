#include<iostream>
using namespace std;

int top = -1;
int stack[5];
int num;

void isfull()
{
	if(top==4)
	{
		cout<<"Stack is full\n\n";
	}
	else
	{
		cout<<"Stack is not full\n\n";
	}
}


void empty()
{
	if(top==-1)
	{
		cout<<"Stack is empty\n\n";
	}
	else
	{
		cout<<"Stack is not empty\n\n";
	}
}

void push()
{
	if(top==4)
	{
		cout<<"Stack is full \n\n";
	}
	else
	{
		cout<<"Push values in stack\n";
		cout<<"Enter number to insert in stack : ";
		cin>>num;
		top++;
		stack[top]=num;
		
	}
}

void pop()
{
	if(top==-1)
	{
		cout<<"Nothing to pop";
	}
	else
	{
		stack[top]=-1;
		top--;
		cout<<"Top"<<top;
	}
}

void peak()
{
	cout<<"Peak value is : "<<stack[top];
}

void search()
{
	int data;
	int flag=0;
	cout<<"enter data you want to search : ";
	cin>>data;
	int newptr=-1;
	while(newptr!=5)
	{
	if(newptr==data)
		{
		cout<<"found";
		flag=1;
		break;
		}
		newptr=newptr+1;
		
}
}

int main()
{
	int choice;
	
	cout<<"\nEnter number between 1 to 5 otherwise program becomes end";
	cout<<"\n\nMENU";
	
	do
	{
	cout<<"\n\nPress 1 for check empty\n";
	cout<<"Press 2 for check full\n";
	cout<<"Press 3 for push\n";
	cout<<"Press 4 for pop\n";
	cout<<"Press 5 for check peak\n\n\n";
	
	cin>>choice;
	system("cls");
	switch(choice)
	{
	case 1:
		{
			cout<<"Empty function\n\n";
			empty();
			break;
		}
		case 2:
			{
				cout<<"Full function\n\n";
				isfull();
				break;
			}
			case 4:
				{
					cout<<"Pop function\n\n";
					pop();
					break;
				}
				case 3:
					{
						cout<<"Push function\n\n";
						push();
						break;
					}
					case 5:
						{
							cout<<"Peak function\n\n";
							
							search();
							break;
						}
}
					}
					while(choice != 6);
						cout<<"OOOOPPPPSSSS!!!!!!\n";
						cout<<"I worn you from start of program\n\n\n";

	return 0;
}
