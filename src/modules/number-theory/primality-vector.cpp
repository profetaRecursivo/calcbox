#include "primality-vector.h"
#include "check_primality.h"
#include <vector>

std::vector<bool> get_primality_up_to(int n){
    std::vector<bool> is_prime_vector(n + 1);
    for(int i = 0; i <= n; i++){
        is_prime_vector[i] = is_prime(i);
    }
    return is_prime_vector;
}