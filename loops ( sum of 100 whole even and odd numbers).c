#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("the sum of whole numbers upto 100\n");
	for(i=0;i<=100;i++)
	{
		sum=sum+i;
		
}
printf("%d\t",sum);
printf("\n");
sum=0;
printf("the sum of natural numbers upto 100\n");
for(i=1;i<=100;i++)
{
	sum=sum+i;
}
printf("%d\t",sum);
return 0;
}
