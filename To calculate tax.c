//Name : Musharaf Mushtaq
//Roll-no : ECE-22-54
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int income;
	printf("Enter total income: \n");
	scanf("%d",&income);
	if(income<150001)
	{
	     printf("No Tax.");	
	}
	else if(income<=300000)
	{
	     printf("10% Tax.");	
	}
	else if(income<=500000)
	{
	     printf("20% Tax.");	
	}
	else if(income>500001)
	{
	     printf("30% Tax.");	
	}
	else
	{
		printf("Invalid");
	}
}