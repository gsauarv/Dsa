#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insert(int data ,int pos)
{
	Node *temp = new(struct Node);
	temp->data = data;
	temp ->next = NULL;
	if(pos==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	Node *temp2 =head;
	for(int i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
	
	
}
void display()
{
	struct Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;

	}
}
int main()
{
	int data,pos,choice;
	do{
	
	cout<<"\nEnter your choice\n 1:Insert \t 2:Display \n 3:Exit\n";
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
			break;
		default:
			cout<<"\nEnter the valid input\n";
		
	}
	
	
}while(choice!=3);
}

