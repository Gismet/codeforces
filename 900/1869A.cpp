#include "template.hpp"

int main()
{
    test(tt)
    {
        int n;
        std::cin >> n;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            std::cin >> a;
            x = x ^ a;
        }

        if (x == 0)
        {
            std::cout << "1\n";
            std::cout << "1 " << n << '\n';
        }
        else
        {
            if (n & 1)
            {
                std::cout << "4\n";
                std::cout << "1 " << n << '\n';
                std::cout << "1 " << n - 1 << '\n';
                std::cout << n - 1<< " " << n << '\n';
                std::cout << n - 1 << " " << n << '\n';
            }
            else
            {
                std::cout << "2\n";
                std::cout << "1 " << n << '\n';
                std::cout << "1 " << n << '\n';
            }
        }
    }

    return 0;
}