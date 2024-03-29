#include "template.hpp"

int main()
{
    test(tt)
    {
        int n, k;
        std::cin >> n >> k;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            if ((x - i - 1) % k != 0)
                cnt++;
        }

        if (cnt == 0)
            std::cout << "0\n";
        else if (cnt == 2)
            std::cout << "1\n";
        else
            std::cout << "-1\n";
    }

    return 0;
}