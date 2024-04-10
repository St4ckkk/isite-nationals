#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values stored into the array are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The values stored into the array in reverse are: \n[");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i != 0)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
