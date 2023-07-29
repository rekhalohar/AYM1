#include <stdio.h>

int linrarserch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int index = linrarserch(arr, n, key);

    return 0;
}