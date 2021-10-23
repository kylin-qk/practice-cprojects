//从键盘上输入9个数成9宫格的形式，在输出二维数组的第一行和第一列(记住行，列的起点）
#include<stdio.h>
void main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			if(i==1||j==1)
			{
				printf("%-6d",a[i][j]);
			}
			else
			{
				printf("%-6c"," ");
			}
		}
		printf("\n");
	}
}
