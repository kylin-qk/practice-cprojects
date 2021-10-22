有1到4四个数字能组成多少个互补相同的三数字。是多少？
#include<stdio.h>
void main()
{
	int i,j,k;
	printf("/n");
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			for(k=1;k<5;k++)
			{
				if(i!=k&&i!=j&&k!=j)
					printf("%d,%d,%d\n",i,j,k);
			}
}
