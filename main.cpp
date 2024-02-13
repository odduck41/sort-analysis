#include <iostream>
<<<<<<< HEAD
#include "Generator.h"
#include "Sorts.h"

// first =, second <=>

int main() {
    auto ans = std::pair{0ull, 0ull};
    auto g = Generator();
    std::vector<long long> arr = {5, 4, 3, 2, 1};
    optimized_bubble_sort(ans, arr);
    for (auto& a: arr) {
        std::cout << a << " ";
    }
    std::cout << " = " << ans.first << std::endl << " <=> "<< ans.second << "\n";
=======

int main() {
    std::cout << "Hello, World!" << std::endl;
>>>>>>> 0bd2524 (init)
    return 0;
}
