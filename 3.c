#include "random.h"
#include <stdio.h>
#include <math.h>

double evaluate(int *x,int *y,int n)
{
	double res=0;
	for(int i=0;i<n;i++)
		res+=sqrt(pow((*(x+1*n+i))-(*(x+i)),2)-pow((*(y+1*n+i))-(*(y+i)),2));
	res/=n;
	return res;
}

void main()
{
	printf("Enter the number of columns:");
	int n;
	scanf("%d",&n);
	int x[2][n],y[2][n];
	for(int i=0;i<n;i++)
	{
		x[0][i]=random32();
		x[1][i]=random32();
		y[0][i]=random32();
		y[1][i]=random32();
	}
	// We can also use "double result=evaluate(&x[0][0],&y[0][0],n);"
	// REFER:https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
	double result=evaluate((int *)x,(int *)y,n);
	printf("Result: %f\n",result);
}