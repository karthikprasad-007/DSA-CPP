#include <bits/stdc++.h>
using namespace std;

//O(logn)
int binarySearch(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;

    while(start<=end) {
        int mid = start + (end - start) / 2;
        if(target > arr[mid]) start = mid + 1;
        else if(target < arr[mid]) end  = mid - 1;
        else return mid;
    }

    return -1;
}

int main() {

    vector<int> arr = {1, 4, 9, 10, 23, 55, 99};
    cout << binarySearch(arr, 99);

    return 0;
}