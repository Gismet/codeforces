#include "template.hpp"

void solve(int n, std::string &s)
{
    int cnt = 0;

    // map
    // pie
    // mapie

    for (int i = 0; i <= n - 5; i++)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e')
        {
            cnt++;
            s[i + 2] = '$';
        }
    }

    for (int i = 0; i <= n - 3; i++)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            cnt++;
            s[i + 1] = '$';
        }
    }

    for (int i = 0; i <= n - 3; i++)
    {
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            cnt++;
            s[i + 1] = '$';
        }
    }

    std::cout << cnt << '\n';
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
        solve(n, s);
    }

    return 0;
}