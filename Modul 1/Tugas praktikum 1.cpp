#include <stdio.h>
#include <math.h>

int main()
{
	double result;
	float param=6.5;
	
	result=log(param);
	
	printf("ln(%f)=%lf\n", param, result);/*cetak output program*/
	return 0;
}