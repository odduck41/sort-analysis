#include "Sorts.h"

void selection_sort(std::pair<unsigned long long, unsigned long long>& operations,
                    std::vector<long long>& arr) {
    for (auto j = static_cast<long long>(arr.size()); j >= 1; --j) {
        long long mx = 0;
        for (auto i = 0ll; i < j; ++i) {
            ++operations.second;
            if (arr[i] > arr[mx]) {
                mx = i;
            }
        }
        std::swap(arr[mx], arr[j - 1]);
        operations.first += 3;
    }
}

void insertion_sort(std::pair<unsigned long long, unsigned long long>& operations,
                    std::vector<long long>& arr) {
    for (auto i = 0ull; i < arr.size(); ++i) {
        auto l = 0ull, r = i + 1;
        while (l + 1 < r) {
            auto mid = (l + r) / 2;
            ++operations.second;
            if (arr[mid] > arr[i]) {
                r = mid;
            } else {
                l = mid;
            }
        }
        std::reverse(arr.begin(), arr.begin() + i);
        operations.first += 3 * (i + bool(i % 2)) / 2;
        std::reverse(arr.begin(), arr.begin() + i + 1);
        operations.first += 3 * (i + 1 + bool((i + 1) % 2)) / 2;
    }
}

void simple_insertion_sort(
        std::pair<unsigned long long, unsigned long long>& operations,
        std::vector<long long>& arr) {
    for (auto i = 0ull; i < arr.size(); ++i) {
        auto j = i;
        while (j > 0 && (++operations.second, arr[j - 1] > arr[j])) {
            std::swap(arr[j], arr[j - 1]);
            operations.first += 3;
            --j;
        }
    }
}

void optimized_bubble_sort(std::pair<unsigned long long, unsigned long long>& operations,
                           std::vector<long long>& arr) {
    auto i = arr.size() - 1;
    while (true) {
        auto last = 0ull;
        for (auto j = 0ull; j < i; ++j) {
            ++operations.second;
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                operations.first += 3;
                last = j;
            }
        }
        i = last;
        if (i == 0) break;
    }
}


void shaker_sort(std::pair<unsigned long long, unsigned long long>& operations,
        std::vector<long long>& arr
        ) {
    auto left = 0ull;
    auto right = arr.size() - 1;
    while (left <= right) {
        for (auto i = right; i > left; --i) {
            ++operations.second;
            if (arr[i - 1] > arr[i]) {
                std::swap(arr[i - 1], arr[i]);
                operations.first += 3;
            }
        }
        ++left;
        for (auto i = left; i < right; ++i) {
            ++operations.second;
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                operations.first += 3;
            }
        }
        --right;
    }
}