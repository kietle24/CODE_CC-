#include <iostream>
#include <vector>
#include <ranges>  // Cần để dùng views

using namespace std;
using namespace std::views;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Lọc ra số chẵn
    auto even = numbers | filter([](int x) { return x % 2 == 0; });

    cout << "Các số chẵn là: ";
    for (int x : even)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
