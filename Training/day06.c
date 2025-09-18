// Date 18/09/2025
#include <stdio.h>

int main()
{
   
    int n;
    printf("Enter number of elements in array\n");scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    //the array 
    printf("The array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max = arr[0];
    printf("By two loops\n");
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            if (currentSum > max)
                max = currentSum;
        }
    }
    printf("%d\n", max);
    // by one loop
    printf("By one loop\n");
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        // int currentSum=0;
        currentSum += arr[i];
        if (currentSum > max)
            max = currentSum;
        if (currentSum < 0)  currentSum= 0;
       
    }

    printf("%d", max);
}