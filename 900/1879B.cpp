#include "template.hpp"

int main()
{
    IO int tt;
    std::cin >> tt;
    while (tt--)
    {
        int n;
        std::cin >> n;
        int min1 = INT_MAX, min2 = INT_MAX;
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            min1 = std::min(min1, x);
            sum1 += x;
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            min2 = std::min(min2, x);
            sum2 += x;
        }

        ll x = (ll)min1 * n + sum2;
        ll y = (ll)min2 * n + sum1;

        std::cout << std::min(x, y) << '\n';
    }

    return 0;
}