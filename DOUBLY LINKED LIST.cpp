#include<iostream>
using namespace std;

struct abc
{
	int data;
	abc *next;
	abc *prev;
};

abc *head = NULL;
										//INSERT AT END
void insertatend()
	{
		//bogi bna lain
	abc *nayanode = new abc;

	//fill data from user in new node..
	cout << "Enter an integer : ";

	cin>>nayanode->data;
	nayanode->next = NULL;
	nayanode->prev = NULL;
	
	//attach nayanode to link list

	if (head == NULL)
	{
		head = nayanode;
	}
	else
	{
		abc *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nayanode;
		nayanode->prev=temp;
	}

	}

											//INSERT AT FRONT 
void insertatfront()
{
	//bogi bna lain
	abc *nayanode = new abc;

	//fill data from user in new node..
	cout << "Enter an integer : ";

	cin >> nayanode->data;
	nayanode->next = NULL;
	nayanode->prev = NULL;
		
	//attach nayanode to link list
	if (head == NULL)
	{
		head = nayanode;
	}
	else
	{
		head->prev=nayanode;
		nayanode->next = head;
		head = nayanode;
	}
}
											//DISPLAY
void display()
{
	abc *temp = head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
		cout << endl;
	}
}

void rev_display()
{
	abc *temp = head;
	while (temp->next != NULL)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->prev;
		cout << endl;
	}
}

											//DELETE

void Delete()
{
	int num;
	abc *aglaptr = head;
	abc *pichlaptr = NULL;
	cout << "enter number you want to delete : ";
	cin >> num;

	//loop to search
	while (aglaptr != NULL && num != aglaptr->data)
	{
		pichlaptr = aglaptr;
		aglaptr = aglaptr->next;
	}
	if (pichlaptr == NULL)			//nishani to delete from front
	{
		head = head->next;
		head->prev=NULL;
		delete aglaptr;
	}
	else if(aglaptr==NULL)				//nishani for data delete from is not present in linklist
	{
		cout << "\n\nDATA U ENTER IS NOT PRESENT IN LINK LIST\n";
	}
	else if (aglaptr->next == NULL)		//nishani to delete from end
	{
		pichlaptr->next = NULL;
		delete aglaptr;
	}
	
	else             //nishani to delete between two nodes
	{
		pichlaptr->next = aglaptr->next;
		aglaptr->next=pichlaptr;
	}
}


											//SEARCH
void search()
{
	int x = 0, flag = 0;
	cout << "Enter data u want to search : ";
	cin >> x;
	abc*temp = head;
	while (temp != NULL)
	{
		if (x == temp->data)
		{
			flag = 1;
			break;
		}
		temp = temp->next;
	}
	if (flag == 0)
	{
		cout << "Data u search is not found " << endl;
	}
	else
	{
		cout << "Data u search is found " << endl;
	}
}
										

int main()
{
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t SIR DANISH THE GREAT " << endl;
		cout << "which question you want to check " << endl;
		cout << "press 1 for insert at end" << endl;
		cout << "press 2 for insert at front" << endl;
		cout << "press 3 for search" << endl;
		cout << "press 4 for delete" << endl;
		cout << "press 5 for display" << endl;
		cout << "press 6 for reverse display" << endl;
		cout << "press 7 to exit" << endl << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
		{
			insertatend();
			break;
		}
		case 2:
		{
			insertatfront();
			break;
		}

		case 3:
		{
			search();
			break;
		}
		case 4:
		{
			Delete();
			break;
		}
		case 5:
		{
			display();
			break;
		}
		case 6:
		{
			rev_display();
			break;
		}

		}

	} while (choice != 7);
	cout << "\n\n\n\n";
	cout << "\t\t\tTHE PROGRAM IS TERMINATE ";
	cout << "\n\n\n";
	return 0;
}
