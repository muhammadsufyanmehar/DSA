void deleteMiddle(stack<int> &inputStack, int N)
{

    int count = 0;
    stack<int> temp;
    while (count <= N / 2)
    {
        if (count == N / 2)
        {
            inputStack.pop();
            count++;
        }
        else
        {
            temp.push(inputStack.top());
            inputStack.pop();
            count++;
        }
    }

    while (!temp.empty())
    {
        inputStack.push(temp.top());
        temp.pop();
    }
    
}