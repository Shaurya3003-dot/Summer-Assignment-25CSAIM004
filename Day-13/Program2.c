//to find the sum and average of array
#include <stdio.h>
int main()
{
    int arr[100], n, sum=0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    avg = sum/n;
    printf("Sum of the elements is: %d\n", sum);
    printf("Average of the elements is: %f\n", avg);
    return 0;
}