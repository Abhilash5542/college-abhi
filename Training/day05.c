// Date : 17/09/2025
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5, k;
    // for target value index
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            printf("Found %d at index %d\n", target, i);
            break;
        }
    }
    // for target value sum pair in array
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Found pair (index %d and index %d) with sum %d\n", i, j, target);
            }
        }
    }
    // found subarray with maximum sum
    int max_sum = arr[0];
    for (int i = 0; i < 5; i++)
    {
        int current_sum = 0;
        for (int j = i; j < 5; j++)
        {
            current_sum += arr[j];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
    }
    // for n element subarray with maximum sum
    printf("Enter the number of elements in subarray: ");
    scanf("%d", &k);
    max_sum = arr[0];
    for (int i = 0; i <= 5 - k; i++)
    {
        int current_sum = 0;
        for (int j = i; j < i + k; j++)
        {
            current_sum += arr[j];
        }
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    printf("Maximum subarray sum is %d\n", max_sum);
    
    // by sliding window technique
    int window_sum = 0;
    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }
    max_sum = window_sum;
    for (int i = k; i < 5; i++)
    {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
        {
            max_sum = window_sum;
        }
    }
    printf("Maximum subarray sum using sliding window is %d\n", max_sum);
    return 0;
}