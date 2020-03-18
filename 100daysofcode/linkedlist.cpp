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
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = n;
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
int main()
{
    node* head = NULL;
    insertathead(head, 6);
    insertathead(head, 5);
    insertathead(head, 3);
    insertinmiddle(head, 4, 2);
    insertatend(head, 7);
    print(head);
    return 0;

}
