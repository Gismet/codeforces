#include "template.hpp"

/**
 * Note: Each 'A' can be swapped with 'B' only up to the first 'A' to its left
 * The rightmost 'A' gathers all the 'B's that are to its right on the left side by getting swapped
 * Then the next rightmost 'A' gathers all the 'B's up to the previous rightmost 'A' (up to the index where 'A' stands originally)
 */


void solve(std::string &s)
{
    int res = 0;
    int i, j;
    int n = s.length();
    j = 0; // number of 'B' between two 'A'
    // AAABABAB
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
        {
            res += j;
            j = (j == 0 ? 0 : 1);
        }
        else
        {
            j++;
        }
    }

    std::cout << res << '\n';
}

int main()
{
    IO int tt;
    std::cin >> tt;
    while (tt--)
    {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        solve(s);
    }

    return 0;
}