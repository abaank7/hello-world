#include<stdio.h>
main()
{
	int a,i,c=0;
	printf("enter the number a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	
		
		if(a%i==0)
	{
	
			c++;
	}

}
		if(c==2)
	{
	
	printf("%d is prime",a);
}
	else
	{
	
	printf("%d is not a prime number",a);
}
}
