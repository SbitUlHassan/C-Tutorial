#include<stdio.h>
int main()
{
	float p,c,m,h,e,avg;
	printf("Enter marks in physics \n");
	scanf("%f",&p);
	printf("Enter marks in chemistry \n");
	scanf("%f",&c);
	printf("Enter marks in math \n");
	scanf("%f",&m);
	printf("Enter marks in history \n");
	scanf("%f",&h);
	printf("Enter marks in english \n");
	scanf("%f",&e);
	avg=(p+c+m+h+e)/5;
	printf("The Average Result is Follow");
	printf("Average of result=%f",avg);
	
}
