//输入一个字符串，将下表为偶数且ASCII马为偶数的字符到另一个字符数组中，并输出；
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],c[100];
	int i,j=0,len;
	printf("请输入一个字符串:");
	gets(str);
	for(i=0;i<strlen(str);i+2)
		if(str[i]%2==0)
		{
			c[j]=str[i];
			j++;
		}
		c[j]='\0';
		printf("%s\n",c);
}
