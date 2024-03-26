#include "template.hpp"

void solve(int a, int b, int n, vv<int> &arr)
{
    ll res = b;
    for (int i : arr)
    {
        res += std::min(i + 1, a) - 1;
    }

    std::cout << res << '\n';
}

int main()
{
    test(tt)
    {
        int a, b, n;
        std::cin >> a >> b >> n;
        vv<int> arr(n);
        for (int &i : arr)
            std::cin >> i;
        solve(a, b, n, arr);
    }

    return 0;
}