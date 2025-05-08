#include "check_primality.h"

bool is_prime(int number){
    bool prime = true;
    if (number < 2) {
        prime = false;
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }
    return prime;
}