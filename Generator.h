#pragma once
#include <vector>
#include <chrono>
#include <ctime>

extern long long seed_1;
extern long long seed_2;
extern long long seed_3;

long long rng();

class Generator {
  public:
    Generator() = default;
    std::vector<long long> operator() (const long long&);
  private:
    std::vector<long long> generated;
};


