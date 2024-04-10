#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    bubbleSort(even, even_count);
    bubbleSort(odd, odd_count);

    printf("The even elements are: \n[");
    for (int i = 0; i < even_count; i++) {
        printf("%d", even[i]);
        if (i < even_count - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("The odd elements are: \n[");
    for (int i = 0; i < odd_count; i++) {
        printf("%d", odd[i]);
        if (i < odd_count - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
