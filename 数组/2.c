#include<stdio.h>
#define N 10
void main()
{
	int n,low,high,mid,find;
	int a[N]={1,3,5,6,8,9,14,35,44,51};
	find=0;
	low=0;
	mid=(low+high)/2;
	high=N-1;
	printf("shuruyigeshu :");
	scanf("%d",&n);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(n==a[mid])
		{
			find=1;
			break;
		}
		else if(n>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(find==1)
	{
		printf("%d\n",mid);
	}
	else
	{
		printf("there is no.......\n");
	}
}
//抵制非法输入的方法如下
#if(0)
do
{
	scanf("");
	getchar();
}while(n<a[0]||n>a[N-1]);
#end if