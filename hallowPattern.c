\*1 1 1 1 1 1 1 1 
  1             1 
  1             1 
  1             1 
  1             1 
  1             1 
  1             1 
  1 1 1 1 1 1 1 1   */ 

#include <stdio.h>

int main(void) {
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	if(r==0||c==0)
	{
		printf("enter 0");
	}
	else
	{
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(i==1|j==1|i==c|j==r)
			{
		             printf("1 ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	}

	return 0;
}
