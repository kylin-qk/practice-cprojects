//����һ���ַ��������±�Ϊż����ASCII��Ϊż�����ַ�����һ���ַ������У��������
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],c[100];
	int i,j=0,len;
	printf("������һ���ַ���:");
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
