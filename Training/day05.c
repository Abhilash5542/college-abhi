// Date : 17/09/2025
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, -4, 5,-7};
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

// {1,2,3,5,6,7} find a mising number in array
    int arr2[6] = {1, 2, 3, 5, 6, 7};
    int n = 7; // since one number is missing
    int total_sum = n * (n + 1) / 2;
    int arr_sum = 0;
    for (int i = 0; i < 6; i++)
    {
        arr_sum += arr2[i];
    }
    int missing_number = total_sum - arr_sum;
    printf("Missing number is %d\n", missing_number);

// check array is palindrome 
    int arr3[5] = {1, 2, 3, 2, 1};
    int is_palindrome = 1;
    for (int i = 0; i < 5 / 2; i++)
    {
        if (arr3[i] != arr3[5 - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("Array is palindrome\n");
    }
    else
    {
        printf("Array is not palindrome\n");
    }
   return 0;
}