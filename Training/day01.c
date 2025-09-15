#include <stdio.h>

int main()
{
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // for(int i=3;i>0;i--){
    //     for(int j=i;j>0;j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=3;j>i;j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=3;i++)
    // {
    //     for(int j=3-i;j>0;j--)
    //     {
    //         printf("  ");
    //     }
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }


    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int j=5-i+1;j>0;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}