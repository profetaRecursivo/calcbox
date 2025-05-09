#include "miller_rabin.h"
#include <iostream>
#include <cstdlib>

long long binpower(long long base, long long e, long long mod) {
    long long res = 1;
    base %= mod;
    while (e > 0) {
        if (e & 1)
            res = (res * base) % mod;
            base = (base * base) % mod;
            e >>= 1;
    }
    return res;
}

bool check_composite(long long n, long long a, long long d, long long s) {
    long long x = binpower(a, d, n);
    if (x == 1 || x == n - 1) return false;
    for (long long r = 1; r < s; r++) {
        x = (x * x) % n;
        if (x == n - 1) return false;
    }
    return true;
}

bool isProbablePrime(long long n, int iter = 5) {
    if (n < 4) return n == 2 || n == 3;

    long long s = 0;
    long long d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        long long a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s)) return false;
    }
    return true;
}