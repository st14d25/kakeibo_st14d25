#include <stdio.h>

int average(int payments[]);

int main(void)
{
	int x[5] = {1,2,3,4,5};
	int y = average(x);

	printf("%d\n", y);

	return 0;
}




int average(int payments[])
{
	int average;
	int i;
	int sum = 0;


	for(i = 0; i < 5; i++){
		 sum = sum + payments[i];
	}

	average = sum / 5;

	return average;
}
