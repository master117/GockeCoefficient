#include <vector>
#include <cstdint>

int64_t gocke_coefficient(int64_t x) {
    std::vector<int> PRIMES = {101, 211, 307, 401, 503, 601, 701, 809};
    std::vector<int> NAME = {74,79,72,65,78,78,69,83,32,71,79,67,75,69};
    const int64_t MOD = 1000000007;

    int64_t acc = x;

    for (size_t i = 0; i < PRIMES.size(); i++) {
        acc = (acc * PRIMES[i] + NAME[i % NAME.size()]) % MOD;
        acc ^= (acc << ((i % 5) + 1));
        acc %= MOD;
    }

    return acc;
}
