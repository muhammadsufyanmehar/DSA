class Solution
{
private:
    int largestRectangleArea(vector<int> heights)
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

public:
    int maxArea(int M[MAX][MAX], int n, int m)
    {

        vector<int> row(m, 0);
        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (M[i][j] == 1)
                    row[j] = row[j] + M[i][j];
                else
                    row[j] = 0;
            }
            area = max(area, largestRectangleArea(row));
        }
        return area;
    }
};