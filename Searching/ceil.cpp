#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    if(target >= arr[end]) return -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(target < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }

    return start;
} 

int main() {
    vector<int> arr = {1, 3, 5, 7, 8, 10};
    cout << ceil(arr, 10);
    return 0;
}