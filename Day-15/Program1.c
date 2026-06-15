//to reverse an array
#include <stdio.h>
int main()
{
    int arr[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int st=1;
    int end=n;
    while(st<end)
    {
        temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    printf("Reversed array is:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}