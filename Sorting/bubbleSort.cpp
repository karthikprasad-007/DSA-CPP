#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
    for(int i = 0; i < arr.size(); ++i) {
        for(int j = 1; j < arr.size() - i; ++j) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 1, 2, 5, 8, 4, 10, 9, 8, -1};
    bubbleSort(arr);
    for(int i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
    return 0;
}