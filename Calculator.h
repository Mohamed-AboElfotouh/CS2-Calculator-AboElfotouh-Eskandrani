#include <cstdlib>
class Calculator {
public:
    template <class T1, class T2>
    auto subtract(T1 a, T2 b) -> decltype(a - b) {
        return a - b;
    }

    template <typename T>
    T divide(T a, T b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }

    long long factorial(long long num) {
        long long result = 1;
        for (; num > 1; num--) {
            result *= num;
        }
        return result;
    }

    long long GCD(long long a, long long b) {
        while (b != 0) {
            long long temp = a;
            a = b;
            b = temp % b;
        }
        return a;
    }
    long long Random(long long a, long long b) {
        if (a > b) {
            std::cerr << "Error: Invalid range for random number!" << std::endl;
            return a;
        }
        return rand() % (b - a + 1) + a;
    }
    
};