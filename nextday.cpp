#include<stdio.h>
int l(int x)
{  int y=0;
   if(x%4==0&&(x%100!=0||x%400==0))
   {y=1;
   }
   return y;
}
int main()
{ int d,m,y;

printf("please enter the date:");
  scanf("%d",&d);
  printf("please enter the month:");
  scanf("%d",&m);
  printf("please enter the year:");
  scanf("%d",&y);
  if(m==1||m==3||m==5||m==7||m==8||m==10)
  { if(d<=30&&d>=1)
    { d=d+1;
	}
	else
	{if(d=31)
     	{m=m+1;
	     d=1;}
	}
  }
  else
  { if(m==4||m==6||m==9||m==11)
     { if(d<=29&&d>=1)
     { d=d+1;
	 }
	  else
	  {if(d==30)
	  {d=1;
	  m=m+1;
	  }
	  }
	 }
	 else
	 { if(m==2)
	 { if(d>=1&&d<=27)
	    d=d+1;
	   else 
	   {if(d==28&& l(y)==0)
	     {m=m+1;
	      d=1;
		 }
		 else
		 {if(d==28&& l(y)==1)
		   d=d+1;
		   else
		   {if(d==29&&l(y)==1)
		    {m=m+1;
		    d=1;
			}
			else
			{if(m==12)
			{if(m==12&&d<=30&&d>=1)
			{d=d+1;
			}
			else 
			{if(m==12&&d==31)
			  {m=1;d=1;y=y+1;
			  }
			}
			}
			}
		   }
		 
		 }
	   }
	 }
	 }
  }
  printf("%d:%d:%d",d,m,y);
  
}
