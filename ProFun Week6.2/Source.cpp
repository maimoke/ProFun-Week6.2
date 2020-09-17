#include<stdio.h>
int main()
{
	int a,b;
	scanf_s("%d %d", &a,&b);
	a = a + b;
	if (a == 0) printf("zero");
	if (a > 0 && a % 2 == 0) printf("Positive Even");
	if (a > 0 && a % 2 == 1) printf("Positive Odd");
	if (a < 0 && a % 2 == 0) printf("Negative Even");
	if (a < 0 && a % 2 == -1) printf("Negative Odd");
	return 0;
}