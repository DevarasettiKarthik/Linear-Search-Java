#include <stdio.h>

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
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int result = linearSearch(arr, size, key);

    if (result != -1)
        printf("%d\n", result);
    else
        printf("-1\n");

    return 0;
}
