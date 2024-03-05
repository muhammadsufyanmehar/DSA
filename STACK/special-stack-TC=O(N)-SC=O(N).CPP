#include <stack>
class SpecialStack
{
    stack<int> s;
    int minEle; // Variable to store the minimum element in the stack.

public:
    // Function to push an element onto the stack.
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);

            // If the stack is empty, the first element becomes the minimum.
            minEle = data;
        }
        else
        {
            if (data >= minEle)
            {
                s.push(data);
            }
            else
            {
                // Push modified value to track previous minimum.
                s.push(2 * data - minEle);

                // Update the current minimum.
                minEle = data;
            }
        }
    }

    // Function to pop an element from the stack.
    void pop()
    {
        int y = s.top();
        s.pop();

        if (y < minEle)
        {
            // Restore previous minimum and update current minimum.
            minEle = 2 * minEle - y;
        }
    }

    // Function to get the top element of the stack.
    int top()
    {

        int y = s.top();

        if (y < minEle)
        {
            // If the top value is less than the current minimum, return the current minimum.
            return minEle;
        }
        else
        {
            return y;
        }
    }

    // Function to check if the stack is empty.
    bool isEmpty()
    {
        return s.empty();
    }

    // Function to get the current minimum element in the stack.
    int getMin()
    {
        return minEle;
    }
};