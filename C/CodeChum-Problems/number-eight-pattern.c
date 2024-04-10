#include <stdio.h>

// Function to print the '8' pattern
void print_eight_pattern(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Loop through each column in the current row
        for (int j = 0; j < n; j++) {
            // If it's the first or last row, print '*' for each column to create the top and bottom edges of '8'
            if (i == 0 || i == n - 1) {
                printf("*");
            }
            // If it's the second or second-last row and first or last column, print '*' to create the middle horizontal lines of '8'
            else if ((i == 1 || i == n - 2) && (j == 0 || j == n - 1)) {
                printf("*");
            }
            // If it's the middle row and it's the first, last, or middle column, print '*' to create the middle vertical line of '8'
            else if (i == n / 2 && (j == 0 || j == n - 1 || j == n / 2)) {
                printf("*");
            }
            // For all other positions, print a space to maintain the shape of '8'
            else {
                printf(" ");
            }
        }
        // Move to the next line after printing each row to create the '8' shape
        printf("\n");
    }
}

// Main function
int main() {
    // Example usage
    print_eight_pattern(5);  // This will print the '8' pattern with 5 rows and columns
    return 0;
}
