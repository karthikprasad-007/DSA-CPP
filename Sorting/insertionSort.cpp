#include <bits/stdc++.h>
using namespace std;

//O(n^2)
void insertionSort(vector<int> &arr) {
    for(int i = 0; i < arr.size() - 1; ++i) {
        for(int j = i + 1; j > 0; --j) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            } else break;
        }
    }
}

void display(vector<int> arr) {
    for(int i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
}

int main() {

    vector<int> arr = {5, 3, 1, 2, 5, 8, 4, 10, 9, 8, -1};
    insertionSort(arr);
    display(arr);
    
    return 0;
}