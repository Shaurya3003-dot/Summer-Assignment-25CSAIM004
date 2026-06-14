//to print frequency of an element in array
#include <stdio.h>
int main()
{
    int arr[100], n, s, count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &s);
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==s)
        {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", s, count);
    return 0;
}