#include "template.hpp"

void solve(ll n, ll k, ll x)
{
    ll a = (k * k + k) / 2;
    ll b = ((2 * n - k + 1) * k) / 2;
    std::cout << (a <= x && x <= b ? "YES\n" : "NO\n");
}

int main()
{
    test(tt)
    {
        ll n, k, x;
        std::cin >> n >> k >> x;
        solve(n, k, x);
    }

    return 0;
}