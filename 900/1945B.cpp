#include "template.hpp"

void solve(ll a, ll b, ll m)
{
    //the first installation fires fireworks every a minutes
    //the second installation fries fireworks every b minutes
    //after some time, they fire a firework at the same time
    //we need to find how many fireworks each installation fires during m minutes
    std::cout << m / a + m / b + 2 << '\n';
}


int main()
{
    IO
    int tt;
    std::cin >> tt;
    while(tt--)
    {
        ll a, b, m;
        std::cin >> a >> b >> m;
        solve(a, b, m);
    }


    return 0;
}