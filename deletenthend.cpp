#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

int length(node *&head)
{
    int l = 0;
    node *temp = head;

    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

void deleteAtHead(node *&head)
{
    node *delhead = head;
    head = head->next;

    delete delhead;

    // return head;
}

node *nthfromend(node *head, int n)
{
    int l = length(head);
    if(head == NULL)
    {
        return head;
    }
    if (l == n || head == NULL)
    {
        deleteAtHead(head);
        return head;
    }
    node *temp = head;

    int d = l - n + 1;

    for (int i = 1; i < d - 1; i++)
    {
        temp = temp->next;
    }

    node *todel = temp;
    if (temp != NULL)
    {
        temp->next = temp->next->next;
        delete todel;
    }

    // return temp->data;
    return head;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);

    display(head);

    node *newhead = nthfromend(head, 3);
    display(newhead);

    return 0;
}