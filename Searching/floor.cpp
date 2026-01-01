#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(target > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }

    return end;
} 

int main() {
    vector<int> arr = {1, 3, 5, 7, 8, 10};
    cout << floor(arr, 1);
    return 0;
}