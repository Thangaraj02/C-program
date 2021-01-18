#include<stdio.h>
int main()
{
    int t,num,reminder=0,rev=0;
     
    printf("\n Enter The Number:");
    scanf("%d",&num);
    for(t=num;t>0;t=t/10)
    {
        reminder=t%10;
        rev=rev*10+reminder;
    }
    if(rev==num)
    {
        printf("\n %d is a Palindrome Number",num);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",num);
    }
}
