#include<stdio.h>
int main()
{
	int n,m,p,q,i,j,k, mat1[10][10],mat2[10][10],mat3[10][10];
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
			printf("\n Element[%d][%d]:",i  ,j );
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
		for (j=0;j<q;j++)
		{
			mat3[i][j]=0;
			
			for (k=0;k<n;k++)
			{
				
						mat3[i][j]+=mat1[i][k]*mat2[k][j];
					}
					
				}
			}
		
	

	printf("Product of entire matrix \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("Elememt in position[%d][%d]:%d",i,j,mat3[i][j]);
			printf("\n");
		}
		
	}
}
return 0;
}
			
	

