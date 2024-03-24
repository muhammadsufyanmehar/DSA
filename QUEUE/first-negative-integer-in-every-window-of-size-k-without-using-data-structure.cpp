vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    vector<long long> ans;
    long long int st = N - 1;
    long long int end = N - 1;
    long long int f = -1;

    while (st >= 0 && end >= 0)
    {
        if (A[st] < 0)
        {
            f = st;
        }
        if (end - st + 1 == K)
        {
            if (f != -1)
            {
                ans.push_back(A[f]);
            }
            else
            {
                ans.push_back(0);
            }
            if (f == end)
            {
                f = -1;
            }
            st--;
            end--;
        }
        else
            st--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}