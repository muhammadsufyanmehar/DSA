#include <bits/stdc++.h>
void pushFunction(stack<int> &myStack, int x)
{

    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    pushFunction(myStack, x);

    myStack.push(num);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{

    pushFunction(myStack, x);
    return myStack;
}
