#include<stdio.h>
int main()
{
	int i;
	printf("even numbers upto 100\n");
	for(i=2;i<=100;i+=2)
	{
		printf("%d\t",i);
}
printf("odd numbers upto 100\n");
i=1;
while(i<=100)
{
	printf("%d\t",i);
	i+=2;
}
return 0;
}
