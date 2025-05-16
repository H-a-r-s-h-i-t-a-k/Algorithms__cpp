#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

long long solve(int N, int *A)
{
    // Declare quickSort before usage
    void quickSort(int *arr, int left, int right)
    {
        if (left >= right)
            return;

        int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j < right; j++)
        {
            if (arr[j] >= pivot)
            { // Sorting in descending order
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[right];
        arr[right] = temp;

        int p = i + 1;
        quickSort(arr, left, p - 1);
        quickSort(arr, p + 1, right);
    }

    // Now it's safe to call quickSort
    quickSort(A, 0, N - 1);

    // Calculate max score
    long long maxScore = 0;
    for (int i = 1; i < N; i++)
    {
        maxScore += A[i - 1] - A[i];
    }

    return maxScore;
}