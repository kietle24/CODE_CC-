#include <iostream>
#include <vector>
#include <ranges>  // cần có để dùng ranges + views

using namespace std;
using namespace std::views;  // This line enables views (magic!)

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    for (int n : nums | filter([](int x) { return x % 2 == 0; })) {
        cout << n << ' ';
    }
    return 0;
}
