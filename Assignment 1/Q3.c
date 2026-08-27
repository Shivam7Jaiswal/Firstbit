void main()
{
	int year = 1800;
	
	if (year % 4==0 && year % 100 !=0 || year % 400==0)
	{
		printf("leap Year");
	}
	
	else
	printf("not a leap Year");
}
