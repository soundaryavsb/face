/*   1   
   1   1 
     1  */ 

 #include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
//	if(r==0||c==0)
if(n==0)
	{
		printf("enter 0");
	}
	else
	{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			//if(i==0|j==1|i==c|j==r)
	         if(
	         	(i==0&&j==(n-1))|(j==0&&i==(n-1))|(i==1&&j==n)|((i==n&&j==1)))
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
