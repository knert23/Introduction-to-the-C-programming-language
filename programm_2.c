#include <stdio.h>

void main()
{
	double a, b, c, x;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	x = (c - b) / a;
	printf("%lf\n", x);
}