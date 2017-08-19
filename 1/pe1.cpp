#include <cstdio>
#include <iostream>
using namespace std;
/*
 *      Sum of all multiples of 3 and 5 below 1000 *
 */

int main () {
    int sum = 0;

    for (int i = 3; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0 )
            sum += i;
    }

    cout << sum << endl;
    
    sum = 0;
    //alternative using counters - might be better if the limit was larger
    int k = 3, j = 3;
    
    for (int i = 3; i < 1000; i++) {
        if (k == 3 || j == 5) {
            k %= 3;
            j %= 5;
            sum += i;
        }
        k++;j++;
    }

    cout << sum << endl;
    return 0;
}