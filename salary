#include <stdio.h>

int main()
{
   float basic, hra, ta, tax;
	float hr,t,pt;
	float net,gross;
	
	int hra_per, ta_per, tax_per;
	
	printf("Enter HRA Percentage: ");
	scanf("%i",&hra_per);
	printf("Enter TA Percentage: ");
	scanf("%i",&ta_per);	
	
	printf("Enter Basic pay: ");
	scanf("%f",&basic);
	printf("Enter Professional tax: ");
	scanf("%f",&tax);	
	
	hr = (basic*hra_per)/100;
	t = (basic*ta_per)/100;
	
	gross = basic + hr + t;
	
	net = gross - tax;
	
	printf("Net Salary is: $ %.02f\n",net);
		printf("Gross Salary is: $ %.02f\n",gross);

    return 0;
}
