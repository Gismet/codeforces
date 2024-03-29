#include "template.hpp"

int main()
{
    test(tt)
    {
        int l, r;
        std::cin >> l >> r;

        if (r < 10)
        {
            std::cout << r << '\n';
        }
        else if (r - l < 100)
        {
            int luck = 0;
            int ans = l;
            for (int i = l; i <= r; i++)
            {
                std::string s = std::to_string(i);
                auto minmax = (std::minmax_element(all(s)));
                if (luck < (*(minmax.second) - *(minmax.first)))
                {
                    luck = *(minmax.second) - *(minmax.first);
                    ans = i;
                }
            }

            std::cout << ans << "\n";
        }
        else
        {
            int ans = 0;
            for (int i = l; i <= r; i++)
            {
                if (i % 100 == 90)
                {
                    ans = i;
                    break;
                }
            }

            std::cout << ans << '\n';
        }
    }

    return 0;
}