#include "binary_search.h"
#include <vector>

int binary_search(std::vector<int> arr, int x){
    int res = -1;
    int l = 0, r = arr.size() - 1;
    while(l <= r){
        int med = (l + r) / 2;
        if (arr[med] == x){
            res = med;
            break;
        }else if(arr[med] < x){
            l = med + 1;
        }else if(arr[med] > x){
            r = med - 1;
        }
    }
    return res;
}