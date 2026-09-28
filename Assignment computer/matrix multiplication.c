#include<stdio.h>
int main()
{
	int n,m,p,q,i,j, c,d,k,sum=0, mat1[10][10],mat2[10][10],mat3[10][10];
	printf("Enter no. of rows of 1st matrix:");
    scanf("%d",&m);
	printf("\n Enter no. of coloumns of 1st matrix:");
	scanf("%d",&n);
	printf("\n Enter no. of rows of 2nd matrix:");
    scanf("%d",&p);
    printf("\n Enter no. of coloumns of 2nd matrix:");
	scanf("%d",&q);
	if (n!=p)
			printf(" Matrix multiplication not possible");
			else
			{
	printf("Enter values into the 1st matrix");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("\n Element[%d][%d]:",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter values into the 2nd matrix");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("\n Element[%d][%d]:",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
			
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			
			for (c=0;c<p;c++)
			{
				for(d=0;d<q;d++)
				{
					for (k=0;k<p;k++)
					{
						sum=sum+mat1[c][k]*mat2[k][d];
					}
					mat3[c][d]=sum;
					sum=0;
				}
			}
		}
	}

	printf("\n Product of entire matrix \n");
	for (c=0;c<m;c++)
	{
		for (d=0;d<q;d++)
		{
			printf("Elememt in position[%d][%d]:%d",c,d,mat3[c][d]);
			printf("\n");
		}
		
	}
}
}
			
	

