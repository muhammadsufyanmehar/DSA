vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        stack<int> s;
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[i])
            {
                s.push(arr[j]);
                break;
            }
            j++;
        }
        if (!s.empty())
        {
            ans.push_back(s.top());
        }
        else
        {
            ans.push_back(-1);
        }
    }
    ans.push_back(-1);
    return ans;
}