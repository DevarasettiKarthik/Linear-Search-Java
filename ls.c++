#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;   // element found
        }
    }
    return -1;          // element not found
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << result << endl;
    else
        cout << -1 << endl;

    return 0;
}
