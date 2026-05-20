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

    uint32_t n{};
    std::cin >> n;

    uint32_t a{n + 1}, b{n - 1};

    auto n_2_a{0u};
    for (auto i{0uz}; i < 3; ++i)
    { 
        n_2_a += a % 10;
        a /= 10;
    }

    auto n_1_a{0u};
    for (auto i{0uz}; i < 3; ++i)
    {
        n_1_a += a % 10;
        a /= 10;
    }

    auto n_2_b{0u};
    for (auto i{0uz}; i < 3; ++i)
    {
        n_2_b += b % 10;
        b /= 10;
    }

    auto n_1_b{0u};
    for (auto i{0uz}; i < 3; ++i)
    {
        n_1_b += b % 10;
        b /= 10;
    }

    if (n_1_a == n_2_a || n_1_b == n_2_b)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}