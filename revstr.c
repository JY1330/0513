#include<stdio.h>
#include<string.h>
int main()
{
	char str[60];
	int i;
	
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	
	for(i=strlen(str); i>=0; i--)
		putchar(str[i]);
	return 0;
}
