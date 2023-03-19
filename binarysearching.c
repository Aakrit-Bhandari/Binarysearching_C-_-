#include <stdio.h>
#include <stdlib.h>
int Isort(int arr[], int a)
{
    for (int i = 1; i < a; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int binarysearch(int arr[], int b, int ele)
{
    int low = 0;
    int mid = 0;
    int high = b - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Isort(arr, n);
    int element;
    scanf("\n%d", &element);
    int A = binarysearch(arr, n, element);
    printf("%d", A);
}