//midpoint of linked list in 0(n/2)
#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}

};
void insertatend(node*& head, int data)
{
	if (head == NULL)
	{
		node* n = new node(data);
		head = n;
		return;

	}
	else
	{
		node* n = new node(data);
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = head;
	}

}
void takeinput(node*& head)
{
	int data;
	cin >> data;
	while (data != -1)
	{
		insertatend(head, data);
		cin >> data;
	}
}
void print(node*& head)
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
}
int main()
{
	node* head = NULL;
	takeinput(head);
	print(head);
}