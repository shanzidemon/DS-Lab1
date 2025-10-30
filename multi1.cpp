#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 4D array ঘোষণা (2x3x3x3 উদাহরণ হিসেবে)
    const int A = 2, B = 3, C = 3, D = 3;
    int arr[A][B][C][D];

    // ইনপুট নেওয়া
    cout << "Enter elements for a 2x3x3x3 array:\n";
    for (int a = 0; a < A; a++) {
        for (int b = 0; b < B; b++) {
            for (int c = 0; c < C; c++) {
                for (int d = 0; d < D; d++) {
                    cout << "arr[" << a << "][" << b << "][" << c << "][" << d << "] = ";
                    cin >> arr[a][b][c][d];
                }
            }
        }
    }

    cout << "\n\n=== 4D Array Visualization ===\n\n";

    // Visualization: প্রতিটি "A" dimension কে আলাদা ব্লক হিসেবে দেখানো
}