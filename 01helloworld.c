#include<stdio.h>
	int main()
		{
			//declaring variables

			int a,b,add,sub,mul,div;
		//taking input from user
			printf("\n Enter first number: ",a);
			scanf("%d",&a);
			printf("\n Enter the Second number: ",b);
			scanf("%d",&b);
		//performing operation 
			add = a+b;
			sub = a-b;
			mul = a*b;
			div = a/b;

		//displaying output
			printf("\n The Addition of two number is : %d",add);
			printf("\n The Subtraction of two number is : %d",sub);
			printf("\n The Multiplication of two number is : %d",mul);
			printf("\n The division of two number is : %d",div);
	return 0;
		}