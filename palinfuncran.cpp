#include<stdio.h>
int ispalin(int x)
{
	int temp,rev=0,rem;
	temp=x;
	while(x>0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	if(rev==temp)
	{
		return rev;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i,k;
	printf("\n enter number");
	scanf("%d",&n);
	if(ispalin(n))
	{
		printf("\n%d is palindrome",n);
	}
	else
	{
	for(i=n-1;i>0;i--)
	{
	if(ispalin(i))
	{
		printf("\n%d is palindrome",i);
		break;
	}
	}
	for(k=n+1;k>0;k++)
	{
	if(ispalin(k))
	{
		printf("\n%d is palindrome",k);
		break;
	}
	}

	if((n-i)>(k-n))
	{
		printf("\n%d is nearest paindrome",k);
	}
	else
	{
		printf("\n%d is nearest paindrome",i);
	}
}
}
