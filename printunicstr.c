#include<stdio.h>
#include <string.h>

int main()
{
	int i, j, k, len,count;
	char str[50], unique[50] = {0};
	puts("Enter any word : ");
	gets(str);
	
	len=strlen(str);
	k=0;
	
	for (i=0;i<len;i++)
	{
		count=0;
		for (j=0;j<i;j++)
		{
			if(str[i]==unique[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			unique[k]=str[i];
			k++;
		}
	}
	
	printf("The Unique character is:");
	puts(unique);
	
	getch();
	}
