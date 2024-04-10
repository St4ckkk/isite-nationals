#include <stdio.h>

int main() {
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
