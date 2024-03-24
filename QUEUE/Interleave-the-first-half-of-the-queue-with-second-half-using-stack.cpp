class Solution
{
public:
    vector<int> rearrangeQueue(queue<int> &q)
    {
        stack<int> s;
        int size = q.size() / 2;

        for (int i = 0; i < size; i++)
        {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        while (!s.empty())
        {
            int val = s.top();
            s.pop();
            q.push(val);
        }

        for (int i = 0; i < size; i++)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }

        for (int i = 0; i < size; i++)
        {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        while (!s.empty())
        {
            int val1 = s.top();
            s.pop();
            q.push(val1);

            int val2 = q.front();
            q.pop();
            q.push(val2);
        }

        vector<int> ans;

        while (!q.empty())
        {
            int val = q.front();
            q.pop();
            ans.push_back(val);
        }

        return ans;
    }
};