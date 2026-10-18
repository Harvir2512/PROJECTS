#include<stdio.h>
void main()
{
	int num,n,i,count=0;
	printf("enter array limit :");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter saerch number:");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			count++;
		}
	}
	printf("count occurrenceSs=%d",count);
}
