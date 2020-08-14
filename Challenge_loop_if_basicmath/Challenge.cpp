#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0, b = 0, c = 0;
	float av = 0, sd = 0, sx = 0, sum = 0, bsd = 0;
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		for (int i = a; i >= b; i--)
		{
			printf("%d ", i);
			sum += i;
			c++;
			sx += (i * i);
		}
		av = sum / c;
		printf("\n");
	}
	else
	{
		for (int j = a; j <= b; j++)
		{
			printf("%d ", j);
			sum += j;
			c++;
			sx += (j * j);
		}
		av = sum / c;
		printf("\n");
	}
	printf("Average = %.1f\n", av);
	av *= av;
	av *= c;
	bsd = sx - av;
	bsd /= (c - 1);
	printf("SD = %.2f", sqrt(bsd));
}