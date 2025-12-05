#include <bits/stdc++.h>
using namespace std;

int orderAgnosticBinarySearch(vector<int> arr, int target) {
    
    int start = 0;
    int end = arr.size() - 1;
    bool isAsc = arr[start] < arr[end];

    while(start <= end) {
        
        int mid = start + (end - start) / 2;
        if(target == arr[mid]) return mid;

        if(isAsc) {
            if(target > arr[mid]) start = mid + 1;
            else end = mid - 1;
        } else {
            if(target < arr[mid]) start = mid + 1;
            else end = mid - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};

    cout << orderAgnosticBinarySearch(arr2, 5);

}