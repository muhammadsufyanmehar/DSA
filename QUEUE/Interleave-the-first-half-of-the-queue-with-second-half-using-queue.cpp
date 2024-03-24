class Solution
{
public:
    vector<int> rearrangeQueue(queue<int> &q)
    {
        int size = q.size() / 2;

        queue<int> nq;

        vector<int> ans;

        for (int i = 0; i < size; i++)
        {
            int val = q.front();
            q.pop();
            nq.push(val);
        }

        while (!nq.empty())
        {
            int val1 = nq.front();
            nq.pop();
            ans.push_back(val1);

            int val2 = q.front();
            q.pop();
            ans.push_back(val2);
        }

        return ans;
    }
};
