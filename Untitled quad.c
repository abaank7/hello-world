#include<stdio.h>
int main()
{
	float x,y;
	printf("enter the x coordinate");
	scanf("%f",&x);
	printf("enter the y coordinate");
	scanf("%f",&y);
	if (x==0&&y==0)
	{
	printf("point lies at the origin");
	}
	else if (x==0)
	{
	printf("point lies on the y axis");
}
else if(y==0)
{printf("point lies on xaxis");
}
else if(x>0&&y>0)
{printf("point lies in first quad");
}
else if (x<0&&y>0)
{printf("point lies in seconnd quad");
}	
else if(x<0&&y<0)
{printf("point lies in third quad");
}
else
{ printf("point lies in fourth quad");
}
return 0;
}
