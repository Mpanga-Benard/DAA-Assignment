// Program to find the maximum element in an array
//By MPANGA BENARD B30786 S24B23/112


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // dynamic array based on user size

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // read each element into the array
    }

    int max = arr[0]; // initialize max with the first element

    // scan through the rest of the array to find a larger value
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // update max when a bigger element appears
        }
    }

    printf("Maximum element = %d\n", max); // final output
    return 0;
}
