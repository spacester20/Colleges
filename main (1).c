/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     char text1[100];
    char text2[100];
    int i,m=0;
    
    printf("Enter : ");
        scanf("%s", text1);
    
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    text2[i] = '\0';
    
    
    printf("First  = %s\n", text1);
    printf("Second  = %s\n", text2);
    
      while(text1[m]!='\0')
    {
        if(text1[m]=='.')
        {
            text1[m]=',';
        }
        m++;
    }
    
     printf(". with ,  = %s\n", text1);
    


    return 0;
}
