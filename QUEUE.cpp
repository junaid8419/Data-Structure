#include<iostream>
using namespace std;

int front = -1;
int rear = -1;
int queue[5];
int num;

void isfull()
{
	if(front==4)
	{
		cout<<"Queue is full\n\n";
	}
	else
	{
		cout<<"Queue is not full\n\n";
	}
}


void empty()
{
	if(front==-1)
	{
		cout<<"Queue is empty\n\n";
	}
	else
	{
		cout<<"Queue is not empty\n\n";
	}
}

void enqueue()
{
	if(front==4)
	{
		cout<<"Queue is full \n\n";
	}
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		cout<<"Enter number in queue : ";
		cin>>queue[rear];
		cout<<endl;
	}
	else
	{
		rear++;
		cout<<"Enter number in queue : ";
		cin>>queue[rear];
		cout<<endl;
	}
}

void dequeue()
{
	if(front==-1)
	{
		cout<<"Nothing to dequeue";
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		cout<<queue[front];
		front++;

	}
}

void peak()
{
	cout<<"Peak value is : "<<queue[front];
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
	cout<<"Press 3 for enqueue\n";
	cout<<"Press 4 for dequeue\n";
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
			case 3:
				{
					cout<<"Enqueue function\n\n";
					enqueue();
					break;
				}
				case 4:
					{
						cout<<"Dequeue function\n\n";
						dequeue();
						break;
					}
					case 5:
						{
							cout<<"Peak function\n\n";
							peak();
							break;
						}
}
					}
					while(choice != 6);
						cout<<"OOOOPPPPSSSS!!!!!!\n";
						cout<<"I worn you from start of program\n\n\n";

	return 0;
}
