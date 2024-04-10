#include <stdio.h>

int main() {
    int n = 5;
    int arr[50];
    int i, sum=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Total sum: %d", sum);

    return 0;
}