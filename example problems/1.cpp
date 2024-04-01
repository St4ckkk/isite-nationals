#include <iostream>
using namespace std;
#define MAX 100
int main() {

    int arr[MAX];
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "After array swapping adjacent elements:" << endl;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n) {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}