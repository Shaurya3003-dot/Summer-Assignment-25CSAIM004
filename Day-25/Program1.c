//to merge two sorted arrays 
#include <stdio.h>
int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
        arr3[n1 + i] = arr2[i];
    }
    for(int i=0; i<(n1+n2); i++)
    {
        for(int j=i+1; j<(n1+n2); j++)
        {
            if(arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    printf("Merged: ");
    for(int i=0; i<(n1+n2); i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}