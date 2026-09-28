#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2];int sum;
	int i,j;
	printf("Entering elements in 1st array");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
		printf("Enter elements in position [%d],[%d] \n",i,j);
			scanf("%d",&arr1[i][j]);
			
		}
		
	}
	printf("Entering elements in 2st array");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
		printf("Enter elements in position [%d],[%d] \n",i,j);
			scanf("%d",&arr2[i][j]);
			
		}
		
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
	
}
}
printf("Printing");
for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			
			printf("\n [%d][%d] ",i,j);
			printf("\n %d ",arr3[i][j]);
		}
		printf("\n");
	}
}

