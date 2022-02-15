#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
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
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
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

// insertion at any point
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
        //cout<<temp->data<<endl;
        node *insertNode = new node(data);

        insertNode->next = temp->next;
        temp->next = insertNode;
    }
}

void deleteAtHead(node *&head)
{
    node *todel = head;
    head = head->next;
    delete todel;
}

void deleteAtTail(node *&tail, node *&head)
{
    node *todel = tail;
    node *temp = head;

    while (temp->next != tail)
    {
        temp = temp->next;
    }
    tail = temp;
    tail->next = NULL;
    delete todel;
}

void deleteByValue(node* &head, int value)
{
    if(head->data == value)
    {
        deleteAtHead(head);
        return;
    }
    else{
        node* temp = head;
        while(temp->next->data != value)
        {
            temp = temp->next;
        }
        node* todel = temp->next;
        temp->next = temp->next->next;
        delete todel;
    }
}

void deleteAtPos(node *&head, node *&tail, int pos)
{
    int len = length(head);
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    else if (pos >= len)
    {
        deleteAtTail(tail, head);
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

        node *todel = temp->next;
        temp->next = temp->next->next;
        delete todel;
    }
}

int main()
{

    node *node1 = new node(1);
    node *head = node1;

    // print(head);

    // insertAtHead(head,12);
    // insertAtHead(head,12);
    // insertAtHead(head,1);
    node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);

    // print(head);
    // cout << "Tail: " << tail->data << endl;
    insertion(head, tail, 3, 5);
    // print(head);
    insertion(head, tail, 1, 10);
    //print(head);
    insertion(head, tail, 7, 190);
    //print(head);
    insertion(head, tail, 10, 1190);
    print(head);
    // cout<<"TAil: "<<tail->data<<endl;

    // deleteAtHead(head);
    // deleteAtHead(head);
    // print(head);
    // cout<<"Head is: "<<head->data<<endl;

    // deleteAtTail(tail, head);
    // deleteAtTail(tail, head);
    // deleteAtTail(tail, head);
    //print(head);
    //cout<<"Tail is: "<<tail->data<<endl;
    // deleteAtPos(head, tail, 8);
    // //deleteAtPos(head, tail, 8);
    // print(head);
    // cout<<"Tail is: "<<tail->data<<endl;
    // deleteAtTail(tail,head);
    // print(head);
    // cout<<"Tail is: "<<tail->data<<endl;
    deleteByValue(head,4);
    print(head);
    return 0;
}