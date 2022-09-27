/*1. Write a C program to find out maximum and minimum from an integer array*/
#include <stdio.h>

int main()
{
    int i, n, min, max;
    int a[n];

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("minimum element of array is : %d", min);
    printf("\nmaximum element of array is : %d", max);

    return 0;
}