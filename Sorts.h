#pragma once
#include <vector>
#include <algorithm>

void selection_sort(std::pair<unsigned long long, unsigned long long>&,
        std::vector<long long>&);

void insertion_sort(std::pair<unsigned long long, unsigned long long>&,
                    std::vector<long long>&);

void simple_insertion_sort(std::pair<unsigned long long, unsigned long long>&,
                           std::vector<long long>&);

void optimized_bubble_sort(std::pair<unsigned long long, unsigned long long>&,
                           std::vector<long long>&);

void shacker_sort(std::pair<unsigned long long, unsigned long long>&,
                  std::vector<long long>&);