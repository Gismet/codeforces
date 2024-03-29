#include "template.hpp"

struct point
{
    int x;
    int y;
};

void solve(point &a, point &b, point &c)
{
    int x = (std::abs(a.x - b.x) + std::abs(a.y - b.y) + std::abs(a.x - c.x) +
             std::abs(a.y - c.y) - (std::abs(b.x - c.x) + std::abs(b.y - c.y)) + 2) /
            2;

    std::cout << x << '\n';
}

int main()
{
    test(tt)
    {
        point a, b, c;
        std::cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        solve(a, b, c);
    }

    return 0;
}