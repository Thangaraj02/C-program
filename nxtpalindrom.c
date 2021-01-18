#include<stdio.h>
int nextpalindrome(int num)
{
    int t,reminder=0,rev=0;
    for(t=num;t>0;t=t/10)
    {
        reminder=t%10;
        rev=rev*10+reminder;
    }
    if(rev==num)
    {
        printf("\n %d is the next Palindrome Number",rev);
        return 1;
    }
}
int main()
{
	int n;
	printf("enter the number to be find next palindrome:");
	scanf("%d",&n);
	while(nextpalindrome(n)!=1)
	{
		n++;
	}
}
