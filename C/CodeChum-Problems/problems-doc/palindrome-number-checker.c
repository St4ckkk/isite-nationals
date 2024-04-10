#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, original, reversed = 0;
    char str[20];
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    sprintf(str, "%d", n);


    reversed = strrev(str);
    
    reversed = atoi(str);

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
