 #include<stdio.h>
void main()
{
	int n,num[100],sum=0,avg;

	printf("Enter the Elements:");
	scanf("%d",&n);

	for (int i=0; i<n; ++i)
	{
		printf("%d Enter the Number",i+1);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("Number of average is:%d",avg);
}


