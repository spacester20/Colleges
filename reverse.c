#include <stdio.h>

int main()
{
      int arr[10];
    int size, i;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse order: ");
    for(i = size-1; i>=0 ; i--)
    {
        printf("Enter elements: %d", arr[i]);
    }

    return 0;
}
