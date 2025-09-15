#include <stdio.h>
// array 
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // reverse array
    printf("\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    // for maximum element
    int max = 0;
    for (int i = 0; i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    //for minimum element
    int min = arr[0];
    for(int i = 0; i<5;i++)
    {
        if(arr[i]<max)
        {
            max = arr[i];
        }
    }
    return 0;


}