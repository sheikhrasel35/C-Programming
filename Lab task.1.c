#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("%d is a leap year .\n",n);
    }
    else if(n%4 == 0 && n%100 != 0)
    {
        printf("%d is a leap year. \n",n);
    }
    else
    {
        printf("%d is not a leap year.\n",n);
    }
}
