#include <cstdio>
#include <iostream>

// Sum of even Fibonacci numbers under 4 million

int main () {
    int a = 1, b = 2, sum = 0;

    while (b < 4000000) {
        int tmp;
        
        if (!(b % 2))
            sum += b;
        tmp = b;
        b += a;
        a = tmp;
    }

    std::cout << sum << std::endl;
    return 0;
}