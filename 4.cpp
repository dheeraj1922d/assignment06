#include "random.h"
#include <stdio.h>
#include <math.h>

double mean(int a[],int n)
{	
	double m=0;
	for(int i=0;i<n;i++)
		m+=a[i];
	m/=n;
	return m;
}

double variance(int a[],int n,double mean)
{
	double v=0;
	for(int i=0;i<n;i++)
		v+=pow((a[i]-mean),2);
	v/=n;
	return v;
}

void main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=random32();
	double meanRes=mean(a,n);
	double varianceRes=variance(a,n,meanRes);
	double sDev=sqrt(varianceRes);
	printf("Mean: %f\n",meanRes);
	printf("Variance: %f\n",varianceRes);
	printf("Standard Deviation: %f\n",sDev);
}