#include "counting_sort.h"
#include <vector>
int encontrarMax(std::vector<int>& arr){
    int max = arr[0];
    int n = (int)arr.size();
    for(int i = 1; i<n; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

std::vector<int> counting_sort(std::vector<int> arr){
    int n = (int)arr.size();
    std::vector<int> res(n);
    int max = encontrarMax(arr);
    std::vector<int> frec(max + 1);

    for(int x:arr) frec[x]++;
    for(int i = 1; i<=max ; i++){
        frec[i]+= frec[i - 1];
    }
    for(int i = n - 1; i >= 0; i--){
        int ind = frec[arr[i]];
        res[ind -1] = arr[i];
        frec[arr[i]]--;
    }
    return res;
}