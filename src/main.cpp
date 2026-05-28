#include <fmt/core.h>
#include "calculator.h"

int main() {

    Calculator calc;

    int result = calc.add(10, 20);

    fmt::print("Result: {}\n", result);

    return 0;
}
