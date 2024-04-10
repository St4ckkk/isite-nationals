#include <stdio.h>

int main() {

    int n1, n2, times_to_iterate;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter how many times: ");
    scanf("%d", &times_to_iterate);
    for(int i=0; i<times_to_iterate; i++){
        for(int j=0; j<=n1; j++){
            printf("-");    
        }
        for(int j=0; j<=2; j++) {
            printf(".");
        }
    }

    return 0;
}

// optimized 
/*
#include <stdio.h>

int main() {

    int n1, n2, times_to_iterate;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter how many times: ");
    scanf("%d", &times_to_iterate);

    for (int i = 0; i < times_to_iterate * (n1 + n2); i++) {
        if (i % (n1 + n2) < n1) {
            printf("-");
        } else {
            printf(".");
        }
    }

    return 0;
}

*/
