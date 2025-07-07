#include <iostream>
#include <vector>
#include <ranges>
using namespace std;
using namespace std::views;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    for (int x : v | filter([](int x){ return x % 2 == 0; }))
        cout << x << ' ';
}
