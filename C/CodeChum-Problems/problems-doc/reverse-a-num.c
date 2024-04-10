#include <stdio.h>

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int reversed = reverse(n);
    
    printf("Reversed: %d\n", reversed);

    return 0;
}
