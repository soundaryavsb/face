//find the number is prime or not .If the number is prime then sqare the number else the number is divided by 2

#include <stdio.h>

int main(void) {
	int number,count=0,i;
	float num;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d",number*number);
	}
	else
	{
		num=number/2;
		printf("%f",num);
	}
	return 0;
}
