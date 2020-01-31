#include <stdio.h>
int main(void)
{
	char s[10];
	int i,count=1;
	scanf("%c",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
		s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			count++;
		}
	}
	if(count>1)
	{	printf("yes");}
	else
	{	printf("no");	}
	return 0;
}
