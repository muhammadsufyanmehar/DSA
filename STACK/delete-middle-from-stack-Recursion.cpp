
void deleteMiddleElement(stack<int> &inputStack, int count, int size)
{

    // Base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int element = inputStack.top();
    inputStack.pop();

    // Recursive call
    deleteMiddleElement(inputStack, count + 1, size);
    inputStack.push(element);
}

void deleteMiddle(stack<int> &inputStack, int N)
{

    int count = 0;
    deleteMiddleElement(inputStack, count, N);
}