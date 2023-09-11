#include<stdio.h>
int main()
  {
  int x,y;
  printf("please enter the year;");
  scanf("%d",&x);
  printf("please enter the month;");
  scanf("%d",&y);
  if(y=2)
  {
  if((x%4==0)&&(x%100!=0||x%400==0))
   {
   printf("29 days");}
  else
 {
   printf("28 days");
 }
  }
  else
  {  if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
    {printf("31 days");
	}
	 else
	 {printf("30 days");
	 }
  }
}
