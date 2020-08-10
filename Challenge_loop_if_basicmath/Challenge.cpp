#include<stdio.h>
#include<math.h>
int main()
{
	int x = 0, y = 0, a = 0;
	float av = 0, sd = 0, sum = 0, bsd = 0;
	scanf_s("%d%d", &x, &y);
	if (x > y) {
		for (int i = x; i >= y; i--)
		{
			printf("%d ", i);
			sum = sum + i;
			a++;
			bsd += (i * i);
		}
		printf("\n");
		av = sum / a;
		bsd /= a;
	}
	else {
		for (int i = x; i <= y; i++) {
			printf("%d ", i);
			sum = sum + i;
			a++;
			bsd += (i * i);
		}
		printf("\n");
		av = sum / a;
		bsd /= a;
	}
	printf("Average = %.1f\n", av);
	av *= av;
	printf("SD = %.2f", sqrt(bsd - av));
	return 0;
}