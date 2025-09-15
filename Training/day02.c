#include <stdio.h>

int main()
{
//     int num=0;
//     for (int i = 0; i < 3; i++)
//     {
//        for(int j=0;j<=i;j++)
//        {
//         printf("%c",num+j+65);
//        }
//         printf("\n");
//         num++;
// }
// print abc pyramid


//   int num=65;
//   for(int i=1;i<=3;i++)
//     {
//         for(int j=3-i;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf(" %c",num++);
//         }
//         printf("\n");
//     }

// invert pyramid
    int a=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int j=5-i+1;j>0;j--)
        {
            printf(" %c",a++);
        }
        printf("\n");
    }
       
    
}
