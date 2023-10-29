#include<stdio.h>
#include<ctype.h>
int main()
{ char c;
 printf("please enter the integer or character");
 c=getchar();
  if (isdigit(c)>0)
  {printf("it is number");
  }
  else
  if(isalpha(c)>0)
  printf("it is alphabet");
  else
  printf("it is special character");
  
}
