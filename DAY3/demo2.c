#include<stdio.h>
int fun_(void)
//fun intization
{
   int base,index;
   int result = 1;
   printf("Enter the base:  ");
   scanf("%d",&base);
   printf("Enter the index:  ");
   scanf("%d",&index);

   for(int i=1; i<=index; i++);
   {
     result = result*base; 

   }
  printf("%d",result);
  return result;

}
int main()
{
	int power;
	power = fun_();
}
