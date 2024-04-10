#include <stdio.h>
#include <string.h>

#define MAX_STRING 100
#define MAX_LENGTH 100

int main()
{
    char strings[MAX_STRING][MAX_LENGTH]; // gi google ra nako ni pano mag store ug strings sa 2D array
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    int prefixLength = 0;               // kalabaon sang common nga prefix
    int minLength = strlen(strings[0]); // kalabaon naman sang short strings

    // ani nga for loop ngitaon nato ang shortest string or kalabaon sang short strings
    for (int i = 1; i < n; i++)
    {
        if (strlen(strings[i]) < minLength)
        {
            minLength = strlen(strings[i]);
        }
    }

    // compare nato siya each character, gi google ko lang ni haha
    for (int i = 0; i < minLength; i++)
    {
        char c = strings[0][i]; // store nato diri ang character sa position i sa first string

        // compare nato ang position i sa first string sa tanan nga string
        for (int j = 1; j < n; j++)
        {
            if (strings[j][i] != c)
            {
                // if dili parehas ang character sa position i sa first string sa uban nga string, print nato
                printf("Longest common prefix: %.*s\n", prefixLength, strings[0]);
                return 0;
            }
        }

        prefixLength++; // tas increments nato ang prefixLength
    }

    // Print the longest common prefix
    printf("Longest common prefix: %.*s\n", prefixLength, strings[0]); // gi chatgpt ra nako ni pano i print ang prefix

    return 0;
}