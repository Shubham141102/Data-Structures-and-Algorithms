#include <stdio.h>
#include <stdlib.h>

void f(int *arr, int l, int r)
{
    if (l >= r)
        return;

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    f(arr, l + 1, r - 1);
}

void f1(int *arr, int l, int n)
{
    if (l >= n / 2)
        return;

    int temp = arr[l];
    arr[l] = arr[n - l - 1];
    arr[n - l - 1] = temp;

    f(arr, l + 1, n);
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    // with two vriables
    f(arr, 0, num - 1);

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    printf("\n");
        printf("-----------------------------");
    // with single variable
    f1(arr, i, num);

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}