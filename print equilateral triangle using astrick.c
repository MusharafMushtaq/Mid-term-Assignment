//Name : Musharaf Mushtaq
//Roll-no : ECE-22-54
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, q, row, n;
	printf("Enter number of rows: \n");
	scanf("%d", &n);
	row=2*n;
	for(i=1;i<=row;i+=2)
	{
		for(q=row;q>i;q-=2)
		{
			printf(" ");
		}
	    for(q=1;q<=i;q++)
	    {
			printf("*");
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}