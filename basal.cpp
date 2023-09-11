#include<stdio.h>
int main()
{  int i,b,hra,da,ta,sal;
  printf("please enter tier of city");
  scanf("%d",&i);
  printf("please enter the basic salary");
  scanf("%d",&b);
  da=(44*b)/(100);
  ta=(8*b)/(100);
  if(i==1)
  { hra=(24*b)/(100);
    sal=hra+da+ta+b;
    printf("your gross salary=%d",sal);
  }
  else
  {if(i=2)
    {
	hra=(16*b)/(100);
    sal=hra+da+ta+b;
    printf("your salary=%d",sal);
	} 
  }
  
  
   
}
