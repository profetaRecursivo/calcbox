#include "euclidean.h"
#include <iostream>
#include <cstdlib>

int binpower(int base, int e, int mod) {
    int res = 1;
    base %= mod;
    while (e > 0) {
        if (e & 1)
            res = (res * base) % mod;
            base = (base * base) % mod;
            e >>= 1;
    }
    return res;
}

bool check_composite(int n, int a, int d, int s) {
    int x = binpower(a, d, n);
    if (x == 1 || x == n - 1) return false;
    for (int r = 1; r < s; r++) {
        x = (x * x) % n;
        if (x == n - 1) return false;
    }
    return true;
}

bool isProbablePrime(int n, int iter = 5) {
    if (n < 4) return n == 2 || n == 3;

    int s = 0;
    int d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s)) return false;
    }
    return true;
}