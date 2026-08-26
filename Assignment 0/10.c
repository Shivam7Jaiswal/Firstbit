// write a C program to input marks of five subjects,find the total marks and calculate the percentage


void main ()
{
	int sub1=77,sub2=80,sub3=71,sub4=90,sub5=66,Totalmarks=500,TMobtained;
	float Percentage;
	TMobtained=sub1+sub2+sub3+sub4+sub5;
	Percentage=((float)TMobtained/Totalmarks)*100;
	
	printf("The total marks obtained are %d and the percentage of the student is %f",TMobtained,Percentage);
}