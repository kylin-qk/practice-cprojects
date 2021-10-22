//输出国际象棋的棋盘
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
			if((i+j)%2==0)			//根据i+j的变化来控制是输出黑方格还是白方格
				printf("%c%c",219,219);
			else
				printf("");
			printf("\n");
	}
}