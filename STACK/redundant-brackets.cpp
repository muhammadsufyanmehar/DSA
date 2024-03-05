bool findRedundantBrackets(string &s)
{
    stack<char> temp;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            temp.push(ch);
        }
        else
        {
            if (ch == ')')
            {

                bool isRedundant = true;
                while (temp.top() != '(')
                {
                    char op = temp.top();
                    if (op == '+' || op == '-' || op == '*' || op == '/')
                    {
                        isRedundant = false;
                        temp.pop();
                    }
                }
                temp.pop();
                if (isRedundant == true)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
