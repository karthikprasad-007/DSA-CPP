#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> arr, int target) {
    for(int i=0; i<arr.size(); ++i) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 2, 10, 3};
    int target = 10;
    cout << linearSearch(arr, target);
    return 0;
}