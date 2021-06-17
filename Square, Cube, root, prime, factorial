#include <stdio.h>

int main()
{
  
  int a,i,type,j;
  float sqr,cube;
  double root;
  long fact=1;
   
  printf("Enter number\n");  
   scanf("%d", &a);  
   
   sqr = a*a;
    printf("Square = %f \n", sqr);
   
   root = sqrt(a);
   printf("Square Square = %f \n",root);
  
   cube = a*a*a;
    printf("Cube = %f \n", cube);
    
    if (a % 2 == 0) {
         printf("It is a prime number \n");
    }else{
          printf("It is not a prime number \n");
    }
    
   for(i=1;i<=a;i++){    
      fact=fact*i;    
  }    
 printf("Factorial = %d \n", fact);
 
 for(i=2; i<=a; i++)
    {
      
        if(a%i==0)
        {
         
            type = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    type = 0;
                    break;
                }
            }

          
            if(type==1)
            {
                printf("Prime Numbers %d\n ", i);
            }
        }
    }
    
    return 0;
}
