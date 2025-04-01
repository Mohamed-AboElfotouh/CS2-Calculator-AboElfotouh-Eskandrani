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

    long long factorial(long long);
    long long GCD(long long, long long);
    long long Random(long long, long long); 
    
};