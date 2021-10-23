#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	int i;
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(a);
	for(i=strlen(a)-1;i>=0;i--)
		printf("%c\n",a[i]);
}
