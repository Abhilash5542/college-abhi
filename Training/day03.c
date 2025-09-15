// Date 11/09/25
#include <stdio.h>
int sum(int a, int b);
void prime(int a);
void magic(int n);
int isMagicNumber(int num);

int main()
{
    int n;
    printf("Enter A Number:");
    scanf("%d", &n);
    magic(n);
    return 0;
    // printf("hhh");  it will not work because it is under return value
}

//    for x pattern

//    int n;
//   printf("enter number:");
//   scanf("%d",&n)
//     for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         if(j==i || j==(n-1)-i)
//            printf("*");
//         else
//             printf(" ");
//     }
//     printf("\n");
//}

// function

//    int a,b,c;
//    printf("Enter A:");scanf("%d/",&a);
//    printf("Enter B:");scanf("%d/",&b);
//    c=sum(a,b);
//    printf("%d",c);
//    return 0;

// For sum of two numbers
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// For prime number

void prime(int a)
{
    int flag = 0;
    for (int i = 2; i * i <= a; i++)
    {

        if (a % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime\n", a);
    }
}

// for magic number
void magic(int n)
{
    int cn = n;
    int sum = 0;
start:
    if (n != 0)
    {
        if (n % 10 != 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
            goto start;
        }
        else
        {
            goto end;
        }
    }
    else
    {
        goto change;
    }
change:
    n = sum;

    goto start;

end:
    if (sum == 1)
        printf("%d number is magic", cn);
    else
    {
        printf("%d Number is Not magic", cn);
    }
}

// recursion
int isMagicNumber(int num)
{
    if (num < 10)
        return (num == 1);
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return isMagicNumber(sum);
}
