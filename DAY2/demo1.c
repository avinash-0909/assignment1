#include<stdio.h>

int main()
{

 int month, year;
 printf("Enter the month :  ");
 scanf("%d",&month);
 printf("Enter the yaer :  ");
 scanf("%d",&year);
  
  switch (month)
  {
   case1 : printf("JAN-31/n");
         break;
   case2 : 

       
	   if ((year%400 == 0 && year%100 != 0)||(year%4 == 0))
	   
	       
		printf("Feb - 29 day/n");
	   
	   else
	   
		 printf("Feb - 28 day/n");
		 
     	 break;
	   
   case3 : printf("Mar - 31 day/n");
         break;
   case4 :  printf("Apr - 30 day/n");
         break;
   default : printf("Invalid input/n");
         break;
   }       
  return 0;
}

 
	  
	    
	   	 










  
  
















