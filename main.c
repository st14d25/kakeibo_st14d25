#include <stdio.h>

int main(void) {
	int earnings[5];
	int i;

	for(i = 0; i < 5; i++) {
		printf("%d個目\n",i+1);
		scanf("%d",&earnings[i]);
	}

	printf("%d\n",earnings[0] + earnings[1] + earnings[2] + earnings[3] + earnings[4] );

	return 0;
}
