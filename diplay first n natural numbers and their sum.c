//Name : Musharaf Mushtaq 
//Roll-no : ECE-22-54
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter the number of terms required: \n");
	scanf("%d",&n);
	printf("First %d natural numbers are: \n", n);
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
		sum+=i;
	}
	printf("Sum of first %d natural numbers is %d \n",n ,sum);
}