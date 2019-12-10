#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insert(int data ,int pos)
{
	Node *temp1 = new(struct Node);
	temp1->data = data;
	temp1->next = NULL;
	if(pos==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	Node *temp2 =head;
	for(int i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
	
}

void delete_n(int pos)
{
	Node *temp1 = head;
	if(pos==1)
	{
		head  = temp1->next;
		delete temp1;
		return;		
	}	
	for(int i=0;i<pos-2;i++)
	temp1=temp1->next;
	Node *temp2=temp1->next;
	delete temp2;
}
void display()
{
	struct Node *temp1 = head;
	while(temp1!=NULL)
	{
		cout<<temp1->data<<"->";
		temp1=temp1->next;

	}
}
int main()
{
	int data,pos,choice;
	do{
	
	cout<<"\nEnter your choice\n 1:Insert \t 2:Display \n 3:Delete \t4:Exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"\nEnter the data\n";
		cin>>data;
		cout<<"\nEnter the position\n";
		cin>>pos;
		insert(data,pos);
		break;
		
		case 2:
			display();
			break;
		case 3:
			cout<<"Enter the position to delete";
			cin>>pos;
			delete_n(pos);
			cout<<(pos)+" Node Deleted";
			break;
			
		case 4:
			break;
			
		default:
			cout<<"\nEnter the valid input\n";
		
	}
	
	
}while(choice!=4);
}

