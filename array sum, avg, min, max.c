#include <stdio.h>

int main()
{
  
  int i, num, max, min;
    float total = 0.0, average;
    
    printf ("Enter the N numbers ");
    scanf("%d", &num);
    int array[num];
 
    printf("Enter %d numbers ", num);
 
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    for (i = 0; i < num; i++)
    {
        total=total+array[i];
        
    
        if(array[i] > max)
        {
            max = array[i];
        }

     
        if(array[i] < min)
        {
            min = array[i];
        }
        
    }
 
    average = total / num;
    
    printf("Maximum  = %d\n", max);
    printf("Minimum  = %d\n", min);
 
    printf("Sum = %f \n", total);
 
    printf("Average = %f", average);
    
    return 0;
}
