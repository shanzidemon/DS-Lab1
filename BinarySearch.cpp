#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            return mid;   // found
        }
        else if (key < arr[mid]) {
            e = mid - 1;  // go left
        }
        else {
            s = mid + 1;  // go right
        }
    }

    return -1;   // not found
}

int main() {

    int arr[] = {2, 5, 7, 10, 14, 20};
    int n = 6;

    int key;
    cout << "Enter key: ";
    cin >> key;

    int index = BinarySearch(arr, n, key);

   cout<<index;

    return 0;
}