#include<stdio.h>
int main()
{ char c;
printf("enter the character");
scanf("%c",&c);
int a=c;
if(a>=97&&a<=122)
{ printf("it is lower case");
}
else{ printf("it is upper case");
}
}
