//�Ӽ�������һ���ַ�����һ���ַ���ɾ�����ַ���������ָ�����ַ��������ս������һ���µ����鲢���
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],s[100],c;
	int i=0,j=0;
	printf("������:");
	gets(str);
	printf("������ָ���ַ�:");
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
	s[j]='\0';				//ĩβ����ַ���������
	printf("%s\n",s);
}//���͵�while���������for ����ڻ��ͨ�����ã�