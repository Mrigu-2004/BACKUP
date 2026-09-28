#include<stdio.h>
int main()
{
	int n,m,p,q;
	printf("Enter no. of rows of 1st matrix:");
    scanf("%d",&n);
	printf("\n Enter no. of coloumns of 1st matrix:");
	scanf("%d",&m);
	printf("Enter no. of rows of 1st matrix:");
    scanf("%d",&p);
    printf("\n Enter no. of coloumns of 2nd matrix:");
	scanf("%d",&q);
	int mat1[m][n],mat2[p][q],mat3[n][n];int i,j;int c,d,k,sum=0;
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
			if (n!=p)
			printf("Matrix multiplication not possible");
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
	printf("\n Product of entire matrix");
	for (c=0;c<m;c++)
	{
		for (d=0;d<q;d++)
		{
			printf("\n %d ",mat3[c][d]);
			printf("\n");
		}
	}
}
			
	

