#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        node *newNode = new node(data);
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << data << endl;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "stack underflow. Can not pop from empty stack." << endl;
        }
        else
        {
            node *temp = top;
            top = top->next;
            cout << "Removed data: " << temp->data << endl;
            delete temp;
        }
    }

    void Top()
    {
        if (top == NULL)
        {
            cout << "No any element in stack. The stack is empty." << endl;
        }
        else
        {
            cout << "The top element is: " << top->data << endl;
        }
    }

    void IsEmpty()
    {
        if (top == NULL)
        {
            cout << "Yes the stcak is empty." << endl;
        }
        else
        {
            cout << "No the stack is not empty." << endl;
        }
    }
};

int main()
{
    stack s;

    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    s.Top();

    s.IsEmpty();

    s.pop();
    s.Top();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.IsEmpty();
    s.Top();

    s.push(2);
    s.Top();
    s.IsEmpty();
    s.pop();
    s.Top();
    s.pop();
    s.IsEmpty();
}