
#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
};

template <typename T, typename s>
T sum(T a, s b)
{
    return a + b;
}

int main()
{
    std::cout << "Template1\n";
    std::cout << add<int>(4, 5) << std::endl;
    std::cout << add<double>(3.14, 6.23) << std::endl;

    std::cout << "Template2\n";
    std::cout << sum<int, char>(10, 30) << std::endl;

    return 0;
}