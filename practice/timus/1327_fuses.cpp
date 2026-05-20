#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#endif

int main()
{
#ifdef COMPETITIVE_DEBUG
    RUN_WITH_TESTS()
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    uint32_t a{}, b{};
    std::cin >> a >> b;

    auto r{0u};
    for (auto i{a}; i <= b; ++i)
    {
        if (i % 2 != 0)
        {
            ++r;
        }
    }

    std::cout << r << std::endl;

    return 0;
}