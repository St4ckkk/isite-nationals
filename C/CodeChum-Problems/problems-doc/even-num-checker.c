#include <stdio.h>

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int even_num[20];
    printf("Even numbers from 1 to %d are:\n", n);
    for(int i=1; i<=n; i++) {
        if(i%2 == 0){
            printf("%d ", i);
        }
       
    }
    return 0;
}