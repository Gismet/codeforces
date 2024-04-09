#include "template.hpp"

void solve(int n, vv<ll> &psum, int l, int r, int k)
{
    ll sum = (r - l + 1) * k * 1LL;

    ll x = psum.back() - (psum[r] - psum[l - 1]) + sum;
    if (x & 1)
        yes else no
}

int main()
{
    test(tt)
    {
        int n, q;
        std::cin >> n >> q;
        vv<ll> psum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            std::cin >> x;
            psum[i] = psum[i - 1] + x;
        }

        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            std::cin >> l >> r >> k;
            solve(n, psum, l, r, k);
        }
    }

    return 0;
}