#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]) ;
    }

    int SumEven = 0 ;
    int SumOdd = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            SumEven += arr[i];
        } else
        {
            SumOdd *= arr[i];
        }
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf( "Sum of even numbers = %d\n", SumEven) ;
    printf("Product of odd numbers = %d\n", SumOdd) ;
    printf( "Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min) ;

    return 0;
}
