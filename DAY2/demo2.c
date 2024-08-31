#include<stdio.h>

 int main()

 {
   // Desing four fun  calculator + ,-,*, /

   int num1,num2, res;
   char op;
   printf("Enter the 1 value : ");
   scanf("%d",&num1);
   printf("Enter the operator [+, -, *, / ]");
   scanf("%*c%c",&op),
   printf("Enter the 2 value : ");
   scanf("%d", &num2);

   switch(op)
   {
     case '+':res= num1 + num2;
	          printf("Add = %d/n",res);
			  break;
	 case '-':res= num1 - num2;
	          printf("sub = %d/n",res);
			  break;
     case '*':res= num1 * num2;
	          printf("multi = %d/n",res);
			  break;
  	 case '/':if(num2 != 0)

	          {
                    printf("div = %d/n",num1/num2); 
		      }
			 else


                 
			  {
                    printf("num2/divisor is zero/n");
				 



			  }
			     break;

     default :("invalid operator  /n");
	            break;



				


				              



				 

				
				 

				 


	          		  

	 
    















   }


   

















       return 0; 
 }
