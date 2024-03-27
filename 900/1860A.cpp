#include "template.hpp"

void solve(std::string &s)
{
    int n = int(s.length());

    std::string s1, s2;
    for (int i = 0; i < n; i++)
        s1 += "()";
    for (int i = 0; i < n; i++)
    {
        s2 += "(";
    }

    for (int i = 0; i < n; i++)
    {
        s2 += ")";
    }

    if (s1.find(s) == std::string::npos)
    {
        std::cout << "YES\n"
                  << s1 << '\n';
    }
    else if (s2.find(s) == std::string::npos)
    {
        std::cout << "YES\n"
                  << s2 << '\n';
    }
    else
    {
        std::cout << "NO\n";
    }
}

int main()
{

    test(tt)
    {
        std::string s;
        std::cin >> s;
        solve(s);
    }

    return 0;
}