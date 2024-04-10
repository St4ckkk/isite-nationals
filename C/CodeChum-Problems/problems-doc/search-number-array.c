#include <stdio.h>

int main()
{
    int n = 5;
    int searchNum;
    int arr[50];
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Search number: ");
    scanf("%d", &searchNum);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == searchNum)
        {
            count++;
        }
    }
    printf("%d is found %d times\n", searchNum, count);

    return 0;
}