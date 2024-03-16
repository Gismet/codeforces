#include "template.hpp"

/**
 * It is only possible to make a palindrome string if we have only 1 odd number of elements
 */


void solve(std::string &s, int n, int k)
{
    vv<int> chars(26);
    for (char ch : s)
        chars[ch - 'a']++;

    int cnt = 0;
    for (int i : chars)
    {
        cnt += (i & 1);
    }

    std::cout << (k < cnt - 1 ? "NO\n" : "YES\n");
}

int main()
{
    IO int tt;
    std::cin >> tt;
    while (tt--)
    {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        solve(s, n, k);
    }

    return 0;
}