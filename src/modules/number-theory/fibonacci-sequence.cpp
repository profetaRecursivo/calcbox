#include "fibonacci-sequence.h"
#include <vector>

std::vector<int> fibonacci(int n) {
    std::vector<int> res(n+1);
    res[0] = res[1] = 1;
    for (int i=2; i<=n; ++i) {
        res[i] = res[i-1] + res[i-2];
    }
    return res;
}