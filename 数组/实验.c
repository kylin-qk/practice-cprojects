//从键盘输入一个字符串和一个字符，删除该字符串中所有指定的字符，将最终结果存入一个新的数组并输出
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],s[100],c;
	int i=0,j=0;
	printf("请输入:");
	gets(str);
	printf("请输入指定字符:");
	//scanf("%c",&c);
	c=getchar();
	while(str[i]!=0)
	{
		if(str[i]!=c)
		{
			s[j]=str[i];
			j++;
		}
		i++;
	}
	s[j]='\0';				//末尾添加字符串结束符
	printf("%s\n",s);
}//典型的while语句与类似for 语句融汇贯通的运用；