#include <iostream>
#include <climits>

int main () {
    int a = INT_MAX;
    long x = LONG_MAX;
    long long l = LLONG_MAX;
    std::cout << "int size: " << sizeof(a) << std::endl;
    std::cout << "long size: " << sizeof(x) << std::endl;
    std::cout << "long long size: " << sizeof(l) << std::endl;
}
