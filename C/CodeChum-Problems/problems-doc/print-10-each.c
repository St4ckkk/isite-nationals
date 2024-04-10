#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    
    printf("Elements entered:\n");
    for(int i = 0; i < n; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
