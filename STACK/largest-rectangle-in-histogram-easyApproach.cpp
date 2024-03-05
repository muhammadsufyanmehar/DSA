class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int res = 0;
        int i = 0;
        while (i < heights.size())
        {
            if (st.empty() || heights[st.top()] <= heights[i])
            {
                st.push(i++);
            }
            else
            {
                int index = st.top();
                st.pop();
                if (!st.empty())
                    res = max(res, heights[index] * (i - st.top() - 1));
                else
                    res = max(res, heights[index] * i);
            }
        }
        while (!st.empty())
        {
            int index = st.top();
            st.pop();
            if (!st.empty())
                res = max(res, heights[index] * (i - st.top() - 1));
            else
                res = max(res, heights[index] * i);
        }
        return res;
    }
};