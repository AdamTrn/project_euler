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


    //alternative - inclusion-exclusion using sum formula (is O(1) )
    sum = 0; 
    int sum3, sum5, sum15;

    sum3 = (999/3) * (3 + 999) / 2;
    sum5 = (995/5) * (5 + 995) / 2;
    
    int i = 999;
    while (i % 15) {
        i--;
    }
    cout << i << endl;
    sum15 = (i/15) * (15 + i) / 2;


    sum = sum3 + sum5 - sum15;
    cout << sum << endl;
    return 0;
}