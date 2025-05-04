#include <stdio.h>

// Function to reverse an array from start to end
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array by d elements
void rotateArray(int arr[], int n, int d) {
    // Reverse the first d elements
    reverseArray(arr, 0, d - 1);
    
    // Reverse the remaining elements
    reverseArray(arr, d, n - 1);
    
    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
}

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    while (T--) {
        int N, D;
        scanf("%d %d", &N, &D); // Input size of the array and the number of rotations
        
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]); // Input array elements
        }
        
        rotateArray(arr, N, D); // Rotate the array by D elements
        
        // Output the rotated array
        for (int i = 0; i < N; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}