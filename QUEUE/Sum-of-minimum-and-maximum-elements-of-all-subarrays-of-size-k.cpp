#include <iostream>
#include <queue>
using namespace std;

int sumOfMinAndMax(int *arr, int size, int k)
{

    deque<int> maxi;
    deque<int> mini;

    // traverse for first window
    for (int i = 0; i < k; i++)
    {

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }
    // find out the sum of maximum and minimum of first window and update the ans
    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    // traverse for next windows
    for (int i = k; i < size; i++)
    {

        // for removal the element from window
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }

        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // for add new element in window
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        // find out the sum of maximum and minimum of second and so on windows and update the ans
        ans += arr[maxi.front()] + arr[mini.front()];
    }

    return ans;
}

int main()
{

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout << sumOfMinAndMax(arr, 7, k) << endl;

    return 0;
}