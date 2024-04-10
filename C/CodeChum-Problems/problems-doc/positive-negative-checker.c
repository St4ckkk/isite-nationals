#include <stdio.h>
#include <string.h>
int main()
{
    int n = 5;
    int arr[50];
    char check[20];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            strcpy(check, "negative number");
        }
        else
        {
            strcpy(check, "positive number");
        }
        printf("%d is a %s\n", arr[i], check);
    }

    return 0;
}