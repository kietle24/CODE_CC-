#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    // Dùng range filter để in số lẻ (C++20)
    for (int n : nums | std::views::filter([](int x) { return x % 2 == 1; })) {
        std::cout << n << " ";
    }

    return 0;
}
