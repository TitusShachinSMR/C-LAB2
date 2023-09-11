#include<stdio.h>
int main()
{ int x;
  printf("please enter the year;");
  scanf("%d",&x);
  if((x%4==0)&&(x%100!=0||x%400==0))
   {
   printf("it is leap year");}
  else
 {
   printf("it is non leap year");}
  
}
