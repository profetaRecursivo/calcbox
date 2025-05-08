#include "bubble_sort.h"
#include <vector>

using namespace std;

void bubble_sort(vector<int> &v) {

    int n = v.size();

    for (int i=0; i<n; ++i) {
        for(int j=1; j<n; ++j) {
            if (v[j-1] < v[j]) {
                swap(v[j-1], v[j]);
            }
        }
    }

}