#include "template.hpp"

/*
    If all the elements are greater than 1, we can decrease n - 1 elements by 1
    and add n - 1 to the remaning one element
    If we have some number of 1s, we have to increase them by 1 at least since 
    they can't be decreased. In this case, we can decrease by 1 all the elements that 
    are greater than 1. To make the sum equal to old sum, we have to increase 1s by at least 1
    if the amount we got by decreasing the elements greater than 1 is less than the number of 
    1s in the array, we can't increase all the 1s, thus for some i, a[i] == b[i], which violates 
    the goodness condition
*/


int main()
{
    test(tt)
    {
        int n;
        std::cin >> n;
        ll sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            if (x == 1)
                cnt++;
            else
                sum = sum + x - 1;
        }
        if (n == 1)
            std::cout << "NO\n";
        else if (sum >= cnt)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}