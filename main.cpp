#include <iostream>
#include "Generator.h"
#include "Sorts.h"

// first =, second <=>

int main() {
    std::freopen("data.txt", "w", stdout);
    int length[10] = {5,7, 41, 43, 439, 569, 4013, 8179, 13441, 21023};
    for (auto& l : length) {
        std::cout << "length " << l << ":\n";
        auto assign = 0ull;
        auto compare = 0ull;
        for (int i = 0; i < 7; ++i) {
            auto g = Generator();
            auto v = g(l);
            std::pair<unsigned long long, unsigned long long> operations = {0, 0};
            selection_sort(operations, v);
            assign += operations.first;
            compare += operations.second;
        }
        std::cout << "\tselection sort:\n" << "\t\tassign = " << assign / 7<< "\n" << "\t\tcompare = " << compare / 7;
        std::cout << "\n";
    }
}