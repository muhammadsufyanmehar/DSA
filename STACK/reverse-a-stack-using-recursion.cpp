void insertAtBottom(stack<int> &s, int num)
{

    if (s.empty())
    {
        s.push(num);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s, num);

    s.push(temp);
}

void reverseStack(stack<int> &stack)
{

    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}