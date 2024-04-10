#include <stdio.h>
#define MAX_LIMIT 50
int main() {

    int size;
    int arr[MAX_LIMIT];
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array:\n");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements of array are:\n");
    for(int i=0; i<size; i++) {
        printf("arr[%d] = arr[%d] ", i, arr[i]);
    }

    return 0;
}