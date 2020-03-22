#include <iostream>
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
//passing pointer as reference variable;
void insertathead(node*& head, int data)
{
    node* n = new node(data);// making object dynamically
    n->next = head;
    head = n;
}
void insertatend(node*& head, int data)
{
    node* n = new node(data);
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertinmiddle(node*& head, int data, int p)
{
    node* n = new node(data);
    p = p - 1;
    node* temp = head;
    while (p > 0)
    {
        temp = temp->next;
        p = p - 1;
    }
    n->next = head->next;
    head->next = n;


}
//passing pointer by value;
void print(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;

    }
}
void deleteathead(node*& head)
{
    node* temp = head;
    head = head->next;
    delete temp;
    return;
}
void deleteatend(node*& head)
{
    node* temp = head;
    node* k = NULL;
    while (temp->next != NULL)
    {
        k = temp;
        temp = temp->next;
    }
    k->next = NULL;
    delete temp;

}
void deleteinmiddle(node*& head, int p)
{
    node* temp = head;
    node* prev = NULL;

    for (int i = 1; i < p - 1; i++)
    {
        prev = temp;
        temp = temp->next;

    }
    prev->next = temp->next;
    delete temp;
}

void reverse(node*& head)
{

}

int main()
{
    node* head = NULL;
    insertathead(head, 6);
    insertathead(head, 5);
    insertathead(head, 3);
    insertinmiddle(head, 4, 2);
    insertatend(head, 7);
    insertathead(head, 2);
    deleteathead(head);
    insertatend(head, 10);
    deleteatend(head);
    insertinmiddle(head, 3, 3);
    deleteinmiddle(head, 3);
    print(head);
    reverse(head);
    print(head);
    return 0;
    

}
