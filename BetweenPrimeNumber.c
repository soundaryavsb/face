#include <stdio.h>

int main(void) {
	int count,a,b,i,j;
	scanf("%d%d",&a,&b);
	for(j=a;j<=b;j++)
	{
		count=0;
	for(i=1;i<=b;i++)
	{
		if(j%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
	printf("%d\n",j);
	}
	}
	return 0;
}
