class Solution
{

    void reverse(queue<int> &q)
    {
        if (q.empty())
        {
            return;
        }

        int temp = q.front();
        q.pop();

        reverse(q);

        q.push(temp);
    }

public:
    queue<int> rev(queue<int> q)
    {
        reverse(q);
        return q;
    }
};