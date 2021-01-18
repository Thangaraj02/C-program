#include <stdio.h>
#include <conio.h>
void main()
{
	char a[100];
	int len,i,vow,strlen;
	printf("Enter a string");
	gets(a);
	len=strlen(a);
	vow=0;
	for(i=0;i<len;i++)
{
    if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
    vow=vow+1;
}
  
	printf("There are %d vowels in the string ",vow);
	getch();
}
