#include <bits/stdc++.h>
using namespace std;

//O(n2)
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; ++i) {
        int max = 0;
        for(int j = 0; j < n - i; ++j) {
            if(arr[j] > arr[max]) max = j;
        }
        int temp = arr[n-i-1];
        arr[n-i-1] = arr[max];
        arr[max] = temp;
    }
}

void display(vector<int> arr) {
    for(int i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
}

int main() {

    vector<int> arr = {5, 3, 1, 2, 5, 8, 4, 10, 9, 8, -1};
    selectionSort(arr);
    display(arr);
    
    return 0;
}