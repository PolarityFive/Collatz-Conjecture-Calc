#include <bit>
#include <cstdint>
#include <iostream>

int main() {
    uint64_t number;
    std::cin >> number;

    uint64_t steps = 0;
    uint64_t calcSteps = 0;
    bool computed = false;

    while (number != 1) {
        if (!computed && (number && !(number & (number - 1)))) {
            calcSteps = steps + (std::bit_width(number) - 1);
            computed = true;
        }
        number = (number & 1) ? number * 3 + 1 : number >> 1;
        steps++;
    }

    std::cout << calcSteps;
}
