#include <iostream>
#include <cmath>

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main() 
{
    std::cout << "isPowerOfTwo(8): " 
              << (isPowerOfTwo(8) ? "true" : "false") << std::endl;

    std::cout << "isPowerOfTwo(6): " 
              << (isPowerOfTwo(6) ? "true" : "false") << std::endl;

    return 0;
}
