#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(target > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }

    return start;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 5, 6};
    cout << lowerBound(arr, 3);
    return 0;
}