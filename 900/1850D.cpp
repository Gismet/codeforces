#include "template.hpp"

void solve(int n, int k, vv<int> &arr)
{
    int x = 1; // the length of the longest subarray where abs(arr[i] - arr[i + 1]) <= k
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] <= k)
            cnt++;
        else
        {
            x = std::max(x, cnt);
            cnt = 1;
        }
    }

    x = std::max(x, cnt);

    std::cout << n - x << '\n';
}

int main()
{
    test(tt)
    {
        int n, k;
        std::cin >> n >> k;
        vv<int> arr(n);
        for (int &i : arr)
            std::cin >> i;
        SORT(arr);
        solve(n, k, arr);
    }

    return 0;
}