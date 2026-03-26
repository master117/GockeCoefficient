#include <iostream>
#include <vector>
#include <utility>

int64_t gocke_coefficient(int64_t x);

int main() {
    std::vector<std::pair<int64_t, int64_t>> tests = {
        {1, 161775865},
        {2, 30881403},
        {42, 325647303},
        {123, 492092873},
        {999, 2766190}
    };

    for (auto& [input, expected] : tests) {
        int64_t result = gocke_coefficient(input);
        if (result != expected) {
            std::cout << "FAIL: " << input << " → " << result
                      << " (expected " << expected << ")\n";
            return 1;
        }
    }

    std::cout << "All tests passed.\n";
    return 0;
}