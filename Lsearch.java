import java.util.*;

class Lsearch {

    // Method to perform Linear Search
    static int linearSearch(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                return i;   // element found
            }
        }
        return -1;          // element not found
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int size = sc.nextInt();     // size of array
        int arr[] = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        int key = sc.nextInt();      // element to search

        int result = linearSearch(arr, key);

        if (result != -1) {
            System.out.println(result);
        } else {
            System.out.println(-1);
        }
    }
}
