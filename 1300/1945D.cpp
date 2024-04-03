#include "template.hpp"

/*Jump from the current i to index j such taht j < i and j > m and a[j] < b[j]
That is optimal
*/


void solve(int m, vv<int> &a, vv<int> &b)
{
    int n = sze(a);
    ll ans = 0;

    for (int i = n - 1; i >= m; i--)
    {
        ans += std::min(a[i], b[i]);
    }

    ll res = 1e18;
    ll x = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        res = std::min(res, x + a[i]);
        x += b[i];
    }

    std::cout << ans + res << '\n';
}

int main()
{
    test(tt)
    {
        int n, m;
        std::cin >> n >> m;
        vv<int> a(n), b(n);
        for (int &i : a)
            std::cin >> i;
        for (int &i : b)
            std::cin >> i;
        solve(m, a, b);
    }
    // //     7 7
    // // 7 2 9 2 6 5 9
    // // 9 1 10 7 1 4 9
    //     vv<int> a = {7, 2, 9, 2, 6, 5, 9};
    //     vv<int> b = {9, 1, 10, 7, 1, 4, 9};
    //     int n = 7;
    //     int m = 7;
    //     solve(m, a, b);

    return 0;
}