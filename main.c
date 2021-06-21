/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
  int arr[10], n, mp, i, count,gcd;
    printf("Enter the Size: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    i=0;
    mp = arr[i];
    while(i<n)
    {
        if(mp<arr[i])
            mp = arr[i];
        i++;
    
        
    }
    while(1)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(mp%arr[i]==0)
                count++;
            i++;
        }
        if(count==n)
            break;
        else
            mp++;
    }

    printf("\nLCM(");
    for(i=0; i<(n-1); i++)
        printf("%d,", arr[i]);
    printf("%d) = %d", arr[i], mp);
    
    return 0;
}
