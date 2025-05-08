#include "euclidean.h"

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(int a, int b) {
    int ans = a/gcd(a, b) * b;
    return ans;
}