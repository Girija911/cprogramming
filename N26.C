#include<stdio.h>
int main()
{
    int n, i;
    float sum = 0, avg, num;
    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements\n", n);
    i = 0;
    while(i < n)
    {
        scanf("%f", &num);
        sum = sum + num;
        i++;
    }
    avg = sum / n;
    printf("\nAverage of numbers is %f", avg);
    retu
