//write a c program to swap two numbers using temporary third variable


void main()
{
	int NUM1=20,NUM2=30,temp;
	temp=NUM2;
	NUM2=NUM1;
	NUM1=temp;
	
	printf("Now the converted vaue of num1 and num2 is %d and %d",NUM1,NUM2);
	
}