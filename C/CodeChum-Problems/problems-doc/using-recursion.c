#include <stdio.h>
#define SIZE 50

void sumRecursion(int arr[], int index, int n, int *totalSum) {
    if (index < n) {
        *totalSum += arr[index] + arr[index]; 
        printf("%d\n", arr[index] + arr[index]);
        sumRecursion(arr, index + 1, n, totalSum);
    }
}

int main() {
    int arr[SIZE];
    int n;
    int totalSum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Result:\n");
    sumRecursion(arr, 0, n, &totalSum);
    printf("Total number: %d\n", totalSum);

    int subtract = arr[0] + arr[0] - (arr[1] + arr[1]); 
    printf("Subtract the first number and second number: \n");
    printf("%d - %d = %d\n", arr[0] + arr[0], arr[1] + arr[1], subtract);
    
    return 0;
}
