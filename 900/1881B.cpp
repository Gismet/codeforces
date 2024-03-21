#include "template.hpp"

void solve(int arr[3])
{
    std::sort(arr, arr + 3);
    if (arr[1] % arr[0] != 0 || arr[2] % arr[0] != 0)
        std::cout << "NO\n";
    else if (arr[1] / arr[0] + arr[2] / arr[0] - 2 <= 3)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main()
{
    IO int tt;
    std::cin >> tt;
    while (tt--)
    {
        int arr[3];
        std::cin >> arr[0] >> arr[1] >> arr[2];
        solve(arr);
    }

    return 0;
}