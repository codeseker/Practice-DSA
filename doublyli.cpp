#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int length(node *&head)
{
    int len = 1;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

void insertion(node *&head, node *&tail, int pos, int data)
{
    int len = length(head);
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    else if (pos >= len)
    {
        insertAtTail(tail, data);
        return;
    }
    else
    {

        int cnt = 1;
        node *temp = head;

        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        node *toInsert = new node(data);
        toInsert->next = temp->next;
        temp->next = toInsert;
        toInsert->prev = temp;
        toInsert->next->prev = toInsert;
    }
}

void deleteAtHead(node* &head)
{
    node* todel = head;

    head->next->prev = NULL;
    head = head->next;

    delete todel;

}

void deleteAtTail(node* &tail, node* &head)
{
    node* temp = head;
    node* todel = tail;

    while(temp->next != tail)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    tail->prev = NULL;
    tail = temp;

    delete todel;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;

    //print(head);
    node *tail = head;
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 80);
    //print(head);
    insertAtTail(tail, 79);
    insertAtTail(tail, 99);
    //print(head);
    insertion(head, tail, 7, 12);
    print(head);

    deleteAtHead(head);
    //print(head);

    deleteAtTail(tail, head);
    deleteAtTail(tail, head);
    print(head);
    //cout<<"Head is: "<<head->data<<endl;
    cout << "Tail is: " << tail->data << endl;

    return 0;
}