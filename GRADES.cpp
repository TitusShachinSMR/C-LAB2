#include<stdio.h>
int main()
{  int e,p,c,m,b,x;
   printf("please enter english mark");
   scanf("%d",&e);
   	printf("please enter physics mark");
   	scanf("%d",&p);
   	printf("please enter chemistry mark");
   	scanf("%d",&c);
   	printf("please enter math mark");
   	scanf("%d",&m);
   	printf("please enter biology mark");
   	scanf("%d",&b);
   	 x= (e+p+c+m+b)/5;
   	 if(x>=90)
   	 {printf("you are A grade");
		}
	 else	
   	{
		 if(x>=80&&x<90)
   	 {printf("you are B grade");
		}
	 else	
   	 {
		if(x>=70&&x<80)
   	 {printf("you are C grade");
		}	
	 else	
   	 {
		if(x>=60&&x<70)
   	 {printf("you are D grade");
		}
	 else{
	 
   	 if(x>=40&&x<60)
   	 {printf("you are E grade");
		}
	 else{
	   
   	 if(x<40)
   	 {printf("you are F grade");
		}
   }
   }
   }
   }
   }
   	 
   	 
   	
}
