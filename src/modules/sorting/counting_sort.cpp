#include "counting_sort.h"
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < (n); i++)
#define fore(i, a, b) for(int i = (a); i<(b); i++)

int encontrarMax(vi& arr){
    int max = arr[0];
    fore(i, 1, sz(arr)){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

vi counting_sort(vi arr){
    vi res(sz(arr));
    int max = encontrarMax(arr);
    vi frec(max + 1);

    for(int x:arr) frec[x]++;
    fore(i,1,(max+1)) frec[i] += frec[i -1];
    for(int i = sz(arr) - 1; i >= 0; i--){
        int ind = frec[arr[i]];
        res[ind -1] = arr[i];
        frec[arr[i]]--;
    }
    return res;
}
