#include "Calculator.h"
#include <cstdlib>

long long Calculator::factorial(long long num) {
    long long result = 1;
    for (; num > 1; num--) {
        result *= num;
    }
    return result;
}
long long Calculator::GCD(long long a, long long b) {
    while (b != 0) {
        long long temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}
long long Calculator::Random(long long a, long long b) 
{
    if (a > b) {
        std::cerr << "Error: Invalid range for random number!" << std::endl;
        return a;
    }
    return rand() % (b - a + 1) + a;
}