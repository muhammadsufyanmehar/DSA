class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        stack<int> s;
        int i = 0;

        while (i < n)
        {
            s.push(i);
            i++;
        }

        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (a != b)
            {
                if (M[a][b] == 1)
                {
                    s.push(b);
                }
                else
                {
                    if (M[b][a] == 1)
                    {
                        s.push(a);
                    }
                }
            }
        }

        int isCelebrity = s.top();
        int j = 0;
        while (j < n)
        {
            if (isCelebrity != j)
            {
                if (M[isCelebrity][j] == 1)
                {
                    return -1;
                }

                if (M[j][isCelebrity] == 0)
                {
                    return -1;
                }
            }
            j++;
        }
        return isCelebrity;
    }
};