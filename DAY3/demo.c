#include<stdio.h>

int add_two(void);
int main()
{
   int res;
   res= add_two();
   printf("%d/n",res);
}
   int add_two(void)
   {
      int num1 ,num2;
	  printf("Enter the num1:  ");
	  scanf("%d",&num1);
	  printf("Enter the num2:  ");
	  scanf("%d",&num2);
	  return  num1 + num2;





   
   }
