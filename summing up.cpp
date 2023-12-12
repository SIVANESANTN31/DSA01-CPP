#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("enter the n th number to be sum: ");
	scanf("%d",&n);
	for(i=1;i=n;i++)
	{
	 sum =sum+i;
	}
	printf("summing up the n number: %d",sum);
	avg=sum/n;
	printf("average of the given n number: %f",avg);
	return 0;
}
