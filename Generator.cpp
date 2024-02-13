#include "Generator.h"

long long seed_1 =
    std::chrono::time_point_cast<std::chrono::milliseconds>(std::chrono::system_clock::now()).time_since_epoch().count();

long long seed_2 = 41;

long long seed_3;

long long rng() {
    long long ans = (41ll * seed_1 +
                     (long long)(1e9+7ll) * seed_2 + (long long)(1e9+9ll) * seed_3) % 759857801ll;
    seed_1 = seed_2;
    seed_2 = seed_3;
    return seed_3 = (ans < 0 ? -ans:ans);
}

std::vector<long long> Generator::operator()(const long long &n) {
    generated.resize(n);
    for (auto& g: generated) {
        g = rng();
    }
    return generated;
}
