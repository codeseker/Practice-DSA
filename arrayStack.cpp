#include <iostream>
using namespace std;

class Stack{

    public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if(size-top > 1)
        {
            top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack is overflowed"<<endl;
        }
    }
    
    void pop()
    {
        if(top >=0)
        {
            top--;
        }
        else{
            cout<<"Stack is underflowed"<<endl;
        }
    }

    int peek()
    {
        if(top >=0 && top < size)
        {
            return arr[top];
        }
        else{
            cout<<"No element in stack"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top >=0 && top<size)
        {
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){

    Stack st(4);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"Top element is: "<<st.peek()<<endl;
    st.push(5);
    // cout<<"Top element is: "<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;


    return 0;
}