#include<stdio.h>
int main()
{
	int x,y,z;
	printf("please enter sides of triangle;");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(x==y&&y==z&&z==x)
	{printf("it is an equilateral triangle");
	}
	else
	{ if(x==y||y==z||z==x)
	   {printf("it is a isocelese triangle");
	   }
	  else
	  {printf("it is scalene triangle");
	  }
	}
}
