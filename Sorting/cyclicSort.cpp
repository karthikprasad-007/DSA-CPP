#include <bits/stdc++.h>
using namespace std;

void cyclicSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        while (arr[i] != i + 1) {
            int correctIndex = arr[i] - 1;
            swap(arr[i], arr[correctIndex]);
        }
    }
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 4};
    
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
    
    cyclicSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
    
    return 0;
}