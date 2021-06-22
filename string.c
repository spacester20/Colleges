#include <stdio.h>

int main()
{
    char Str[1000], RevStr[100],  Str2[100];
    int i,j,len,m,k,t,c=0;
  
    printf("Enter a word: ");
    scanf("%s", Str);
    
    printf("\n Please Enter the Second word :  ");
  scanf("%s", Str2);
  
    for (i = 0; Str[i] != '\0'; ++i);
    
    j = 0;
  	len = i;
 
  	for (m = i - 1; m >= 0; m--)
  	{
  		RevStr[j++] = Str[m];
  	}
  	RevStr[m] = '\0';
  	
  printf("Length is %d", i);
  	printf("\n String after Reversing = %s", RevStr);
  
   if(Str2[i] == Str[i]){
  	        printf("\nEqual\n");
  	  }else{
  	       printf("\nNot Equal\n");
  	  }
  	  
  
    return 0;
}
