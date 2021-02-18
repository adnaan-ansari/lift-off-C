#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    int i, sum = 0;
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sum = sum + arr[i];
    }
    printf("Sum of elements in even position : %d  \n", sum);

    return 0;
}
