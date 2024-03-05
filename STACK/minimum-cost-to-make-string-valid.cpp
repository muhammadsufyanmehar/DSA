int findMinimumCost(string str)
{

    if (str.size() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    int a = 0;
    int b = 0;
    while (!s.empty())
    {
        char ch = s.top();
        if (ch == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}