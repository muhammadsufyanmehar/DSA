void sortAndInsert(stack<int> &s, int num)
{

    if (s.empty() || s.top() < num)
    {
        s.push(num);
        return;
    }

    int temp = s.top();
    s.pop();

    sortAndInsert(s, num);

    s.push(temp);
}

void sortStack(stack<int> &stack)
{

    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortAndInsert(stack, num);
}