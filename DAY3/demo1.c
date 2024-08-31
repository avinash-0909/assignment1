#include<stdio.h>

int acepts_num(void)

{
  int x;
  printf("Enter the num:  ");
  scanf("%d",&x);
   return x;
}
char fun_char(void)
{
   return 'A';
}
double fun_double(void)
{
   return 3.5;
   
}
float fun_float(void)
{

   return 2.2;
}
int main(void)
{
   int n1 = acepts_num();
   printf("n1 = %d",n1);
   char ch;
   ch = fun_char();
   
   float  f1;

   f1 = fun_float();

   double  d1;
   d1 = fun_double();
   
   printf("%d %c %.2f %.2lf /n", n1,ch,f1,d1);

   return 0;
    
} 




