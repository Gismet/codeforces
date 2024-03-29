#include "template.hpp"

int main()
{
    test(tt)
    {
        int n;
        std::cin >> n;
        if (n == 1)
            std::cout << "1\n";
        else if (n & 1)
            std::cout << "-1\n";
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                std::cout << i << " " << i - 1 << " ";
            }
            std::cout << '\n';
        }
    }

    return 0;
}