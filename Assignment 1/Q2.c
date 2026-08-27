// write a program to check given 3 digit number is a palindrome or not

void main()
{
	int b,c,a = 121;
   	b = a % 10;
	c = a /100;
	if(b == c)
	{
		printf("THE DIGIT IS PALINDROME");
	}
	else
	{
		printf("THE DIGIT IS NOT PALINDROME");
	}
}



//#include<stdio.h>
//void main()
//{
//	int first,third,num;
//	printf("enter a 3 digit number: ");
//	scanf("%d",&num);
//	
//	third=num % 10;
//	first=num /100;
//	if(first==third)
//	printf("palindrome");
//	else
//	printf("not palindrome");
//	
//}