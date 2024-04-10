#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    char str[50];
    sprintf(str, "%d", num);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

// Function to generate a row of the diamond pattern
void generate_row(int n, int i) {
    // Leading spaces for center alignment
    int j;
    for (j = 0; j < n - i; j++) {
        printf(" ");
    }

    // Generate a list of palindrome numbers within the range [1, i]
    for (j = 1; j <= i; j++) {
        if (is_palindrome(j)) {
            printf("%d", j);
        }
    }

    // Concatenate leading spaces, palindrome numbers, and reversed palindrome numbers (excluding last)
    for (j = i - 1; j >= 1; j--) {
        if (is_palindrome(j)) {
            printf("%d", j);
        }
    }

    printf("\n");
}

//Function to generate the diamond pattern
void generate_diamond(int n) {
    // Generate upper half of the diamond
    for (int i = 1; i <= n; i++) {
        generate_row(n, i);
    }

    // Generate lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        generate_row(n, i);
    }
}

// Main function
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    generate_diamond(n);
    return 0;
}
